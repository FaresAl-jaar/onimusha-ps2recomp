#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8FE0
// Address: 0x3d8fe0 - 0x3d909c
void sub_003D8FE0_0x3d8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8FE0_0x3d8fe0");
#endif

    switch (ctx->pc) {
        case 0x3d908cu: goto label_3d908c;
        default: break;
    }

    ctx->pc = 0x3d8fe0u;

    // 0x3d8fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8fe4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d8fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8fec: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d8fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d8ff0: 0x10a60021  beq         $a1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D8FF0u;
    {
        const bool branch_taken_0x3d8ff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3D8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FF0u;
        // 0x3d8ff4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ff0) {
            ctx->pc = 0x3D9078u;
            goto label_3d9078;
        }
    }
    ctx->pc = 0x3D8FF8u;
    // 0x3d8ff8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8FF8u;
    {
        const bool branch_taken_0x3d8ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8ff8) {
            ctx->pc = 0x3D9040u;
            goto label_3d9040;
        }
    }
    ctx->pc = 0x3D9000u;
    // 0x3d9000: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9000u;
    {
        const bool branch_taken_0x3d9000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9000) {
            ctx->pc = 0x3D9010u;
            goto label_3d9010;
        }
    }
    ctx->pc = 0x3D9008u;
    // 0x3d9008: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3D9008u;
    {
        const bool branch_taken_0x3d9008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9008) {
            ctx->pc = 0x3D9090u;
            goto label_3d9090;
        }
    }
    ctx->pc = 0x3D9010u;
label_3d9010:
    // 0x3d9010: 0x240500f3  addiu       $a1, $zero, 0xF3
    ctx->pc = 0x3d9010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x3d9014: 0xa0852be4  sb          $a1, 0x2BE4($a0)
    ctx->pc = 0x3d9014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9018: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3d9018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3d901c: 0xa0862be5  sb          $a2, 0x2BE5($a0)
    ctx->pc = 0x3d901cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d9020: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x3d9020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9024: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d9024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9028: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d9028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d902c: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d902cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9030: 0xa4832be8  sh          $v1, 0x2BE8($a0)
    ctx->pc = 0x3d9030u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9034: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d9034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9038: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d903c: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d903cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9040:
    // 0x3d9040: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d9040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d9044: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D9044u;
    {
        const bool branch_taken_0x3d9044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9044u;
        // 0x3d9048: 0x240500f4  addiu       $a1, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9044) {
            ctx->pc = 0x3D9090u;
            goto label_3d9090;
        }
    }
    ctx->pc = 0x3D904Cu;
    // 0x3d904c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3d904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d9050: 0xa0852be4  sb          $a1, 0x2BE4($a0)
    ctx->pc = 0x3d9050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9054: 0xa0802be5  sb          $zero, 0x2BE5($a0)
    ctx->pc = 0x3d9054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9058: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x3d9058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d905c: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d905cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9060: 0xa4832be6  sh          $v1, 0x2BE6($a0)
    ctx->pc = 0x3d9060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9064: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d9064u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9068: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d9068u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d906c: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d906cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9074: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d9074u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9078:
    // 0x3d9078: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d9078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d907c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D907Cu;
    {
        const bool branch_taken_0x3d907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d907c) {
            ctx->pc = 0x3D9090u;
            goto label_3d9090;
        }
    }
    ctx->pc = 0x3D9084u;
    // 0x3d9084: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D9084u;
    SET_GPR_U32(ctx, 31, 0x3D908Cu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D9084u, 0x3D908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D908Cu;
label_3d908c:
    // 0x3d908c: 0x0  nop
    ctx->pc = 0x3d908cu;
    // NOP
label_3d9090:
    // 0x3d9090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9094: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9094u;
        // 0x3d9098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D909Cu;
}
