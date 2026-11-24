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

// Function: sub_002CE950
// Address: 0x2ce950 - 0x2ce9dc
void sub_002CE950_0x2ce950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE950_0x2ce950");
#endif

    switch (ctx->pc) {
        case 0x2ce964u: goto label_2ce964;
        case 0x2ce9acu: goto label_2ce9ac;
        default: break;
    }

    ctx->pc = 0x2ce950u;

    // 0x2ce950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce954: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE954u;
    {
        const bool branch_taken_0x2ce954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE954u;
        // 0x2ce958: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce954) {
            ctx->pc = 0x2CE970u;
            goto label_2ce970;
        }
    }
    ctx->pc = 0x2CE95Cu;
    // 0x2ce95c: 0xc0b3840  jal         func_2CE100
    ctx->pc = 0x2CE95Cu;
    SET_GPR_U32(ctx, 31, 0x2CE964u);
    ctx->pc = 0x2CE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE95Cu;
    // 0x2ce960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE100u, 0x2CE95Cu, 0x2CE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE964u;
label_2ce964:
    // 0x2ce964: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CE964u;
    {
        const bool branch_taken_0x2ce964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce964) {
            ctx->pc = 0x2CE9D0u;
            goto label_2ce9d0;
        }
    }
    ctx->pc = 0x2CE96Cu;
    // 0x2ce96c: 0x0  nop
    ctx->pc = 0x2ce96cu;
    // NOP
label_2ce970:
    // 0x2ce970: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE970u;
    {
        const bool branch_taken_0x2ce970 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x2ce970) {
            ctx->pc = 0x2CE988u;
            goto label_2ce988;
        }
    }
    ctx->pc = 0x2CE978u;
    // 0x2ce978: 0x93838a88  lbu         $v1, -0x7578($gp)
    ctx->pc = 0x2ce978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x2ce97c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2ce97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2ce980: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE980u;
    {
        const bool branch_taken_0x2ce980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE980u;
        // 0x2ce984: 0xa3838a88  sb          $v1, -0x7578($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937224), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce980) {
            ctx->pc = 0x2CE9A0u;
            goto label_2ce9a0;
        }
    }
    ctx->pc = 0x2CE988u;
label_2ce988:
    // 0x2ce988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce98c: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x2ce98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ce990: 0x93838a88  lbu         $v1, -0x7578($gp)
    ctx->pc = 0x2ce990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x2ce994: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ce994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ce998: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ce998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ce99c: 0xa3838a88  sb          $v1, -0x7578($gp)
    ctx->pc = 0x2ce99cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937224), (uint8_t)GPR_U32(ctx, 3));
label_2ce9a0:
    // 0x2ce9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce9a4: 0xc0b348c  jal         func_2CD230
    ctx->pc = 0x2CE9A4u;
    SET_GPR_U32(ctx, 31, 0x2CE9ACu);
    ctx->pc = 0x2CE9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9A4u;
    // 0x2ce9a8: 0xa3838a8c  sb          $v1, -0x7574($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937228), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD230u, 0x2CE9A4u, 0x2CE9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE9ACu;
label_2ce9ac:
    // 0x2ce9ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ce9b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ce9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce9b4: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x2ce9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2ce9b8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2ce9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2ce9bc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2ce9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2ce9c0: 0xa023e000  sb          $v1, -0x2000($at)
    ctx->pc = 0x2ce9c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x2ce9c4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2ce9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ce9c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ce9cc: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2ce9ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_2ce9d0:
    // 0x2ce9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9D4u;
        // 0x2ce9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE9DCu;
}
