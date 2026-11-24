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

// Function: sub_003D9790
// Address: 0x3d9790 - 0x3d9870
void sub_003D9790_0x3d9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9790_0x3d9790");
#endif

    switch (ctx->pc) {
        case 0x3d980cu: goto label_3d980c;
        case 0x3d9840u: goto label_3d9840;
        case 0x3d985cu: goto label_3d985c;
        default: break;
    }

    ctx->pc = 0x3d9790u;

    // 0x3d9790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d9794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d9798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d979c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d97a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d97a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d97a4: 0x90842be1  lbu         $a0, 0x2BE1($a0)
    ctx->pc = 0x3d97a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d97a8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D97A8u;
    {
        const bool branch_taken_0x3d97a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97A8u;
        // 0x3d97ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d97a8) {
            ctx->pc = 0x3D9838u;
            goto label_3d9838;
        }
    }
    ctx->pc = 0x3D97B0u;
    // 0x3d97b0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D97B0u;
    {
        const bool branch_taken_0x3d97b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d97b0) {
            ctx->pc = 0x3D97F8u;
            goto label_3d97f8;
        }
    }
    ctx->pc = 0x3D97B8u;
    // 0x3d97b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D97B8u;
    {
        const bool branch_taken_0x3d97b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d97b8) {
            ctx->pc = 0x3D97C8u;
            goto label_3d97c8;
        }
    }
    ctx->pc = 0x3D97C0u;
    // 0x3d97c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3D97C0u;
    {
        const bool branch_taken_0x3d97c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d97c0) {
            ctx->pc = 0x3D9860u;
            goto label_3d9860;
        }
    }
    ctx->pc = 0x3D97C8u;
label_3d97c8:
    // 0x3d97c8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x3d97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x3d97cc: 0xa2032be4  sb          $v1, 0x2BE4($s0)
    ctx->pc = 0x3d97ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d97d0: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d97d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d97d4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d97d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d97d8: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d97d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d97dc: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d97dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d97e0: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d97e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d97e4: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d97e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d97e8: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d97e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d97ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d97f0: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d97f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d97f4: 0x0  nop
    ctx->pc = 0x3d97f4u;
    // NOP
label_3d97f8:
    // 0x3d97f8: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d97f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d97fc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D97FCu;
    {
        const bool branch_taken_0x3d97fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97FCu;
        // 0x3d9800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d97fc) {
            ctx->pc = 0x3D9860u;
            goto label_3d9860;
        }
    }
    ctx->pc = 0x3D9804u;
    // 0x3d9804: 0xc0f6dd0  jal         func_3DB740
    ctx->pc = 0x3D9804u;
    SET_GPR_U32(ctx, 31, 0x3D980Cu);
    ctx->pc = 0x3D9808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9804u;
    // 0x3d9808: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB740u, 0x3D9804u, 0x3D980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D980Cu;
label_3d980c:
    // 0x3d980c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9810: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d9810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9814: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d9814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9818: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d9818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d981c: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d981cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9820: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9824: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d9824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9828: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d982c: 0x92022be1  lbu         $v0, 0x2BE1($s0)
    ctx->pc = 0x3d982cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9834: 0xa2022be1  sb          $v0, 0x2BE1($s0)
    ctx->pc = 0x3d9834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 2));
label_3d9838:
    // 0x3d9838: 0xc0f6e08  jal         func_3DB820
    ctx->pc = 0x3D9838u;
    SET_GPR_U32(ctx, 31, 0x3D9840u);
    ctx->pc = 0x3D983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9838u;
    // 0x3d983c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB820u, 0x3D9838u, 0x3D9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9840u;
label_3d9840:
    // 0x3d9840: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D9840u;
    {
        const bool branch_taken_0x3d9840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9840) {
            ctx->pc = 0x3D9860u;
            goto label_3d9860;
        }
    }
    ctx->pc = 0x3D9848u;
    // 0x3d9848: 0x92022be1  lbu         $v0, 0x2BE1($s0)
    ctx->pc = 0x3d9848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d984c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9854: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D9854u;
    SET_GPR_U32(ctx, 31, 0x3D985Cu);
    ctx->pc = 0x3D9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9854u;
    // 0x3d9858: 0xa2022be1  sb          $v0, 0x2BE1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D9854u, 0x3D985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D985Cu;
label_3d985c:
    // 0x3d985c: 0x0  nop
    ctx->pc = 0x3d985cu;
    // NOP
label_3d9860:
    // 0x3d9860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9868: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9868u;
        // 0x3d986c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9870u;
}
