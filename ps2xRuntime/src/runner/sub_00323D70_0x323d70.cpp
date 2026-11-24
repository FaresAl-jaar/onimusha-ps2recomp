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

// Function: sub_00323D70
// Address: 0x323d70 - 0x323e6c
void sub_00323D70_0x323d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323D70_0x323d70");
#endif

    switch (ctx->pc) {
        case 0x323e58u: goto label_323e58;
        default: break;
    }

    ctx->pc = 0x323d70u;

    // 0x323d70: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x323d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x323d74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323d78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x323d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x323d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323d80: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x323d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x323d84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323d88: 0x3401ad00  ori         $at, $zero, 0xAD00
    ctx->pc = 0x323d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44288);
    // 0x323d8c: 0x28a3002d  slti        $v1, $a1, 0x2D
    ctx->pc = 0x323d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x323d90: 0x815021  addu        $t2, $a0, $at
    ctx->pc = 0x323d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x323d94: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x323D94u;
    {
        const bool branch_taken_0x323d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D94u;
        // 0x323d98: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d94) {
            ctx->pc = 0x323DA0u;
            goto label_323da0;
        }
    }
    ctx->pc = 0x323D9Cu;
    // 0x323d9c: 0x254a0044  addiu       $t2, $t2, 0x44
    ctx->pc = 0x323d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 68));
label_323da0:
    // 0x323da0: 0x91480042  lbu         $t0, 0x42($t2)
    ctx->pc = 0x323da0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x323da4: 0x91470040  lbu         $a3, 0x40($t2)
    ctx->pc = 0x323da4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x323da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323dac: 0xa34814  dsllv       $t1, $v1, $a1
    ctx->pc = 0x323dacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x323db0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323db4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x323db4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x323db8: 0x1203027  not         $a2, $t1
    ctx->pc = 0x323db8u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
    // 0x323dbc: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x323dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x323dc0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x323dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x323dc4: 0xa1430042  sb          $v1, 0x42($t2)
    ctx->pc = 0x323dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x323dc8: 0x91430042  lbu         $v1, 0x42($t2)
    ctx->pc = 0x323dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x323dcc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x323dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x323dd0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x323dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x323dd4: 0x81430043  lb          $v1, 0x43($t2)
    ctx->pc = 0x323dd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 67)));
    // 0x323dd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x323ddc: 0xa1430043  sb          $v1, 0x43($t2)
    ctx->pc = 0x323ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x323de0: 0xdc25ae18  ld          $a1, -0x51E8($at)
    ctx->pc = 0x323de0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946328)));
    // 0x323de4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323de8: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x323de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x323dec: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x323decu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x323df0: 0xdc23ae08  ld          $v1, -0x51F8($at)
    ctx->pc = 0x323df0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946312)));
    // 0x323df4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323df8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x323df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x323dfc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x323dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x323e00: 0xfc23ae08  sd          $v1, -0x51F8($at)
    ctx->pc = 0x323e00u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946312), GPR_U64(ctx, 3));
    // 0x323e04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x323e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323e08: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x323e08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x323e0c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x323e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x323e10: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x323e10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x323e14: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x323e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323e18: 0x90a3002e  lbu         $v1, 0x2E($a1)
    ctx->pc = 0x323e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x323e1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x323e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x323e20: 0xa0a3002e  sb          $v1, 0x2E($a1)
    ctx->pc = 0x323e20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x323e24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323e28: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x323E28u;
    {
        const bool branch_taken_0x323e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323e28) {
            ctx->pc = 0x323E58u;
            goto label_323e58;
        }
    }
    ctx->pc = 0x323E30u;
    // 0x323e30: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x323e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323e34: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x323e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x323e38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x323E38u;
    {
        const bool branch_taken_0x323e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323e38) {
            ctx->pc = 0x323E58u;
            goto label_323e58;
        }
    }
    ctx->pc = 0x323E40u;
    // 0x323e40: 0x90a2002c  lbu         $v0, 0x2C($a1)
    ctx->pc = 0x323e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x323e44: 0x3401ae60  ori         $at, $zero, 0xAE60
    ctx->pc = 0x323e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44640);
    // 0x323e48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x323e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x323e4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323e50: 0xc0c9000  jal         func_324000
    ctx->pc = 0x323E50u;
    SET_GPR_U32(ctx, 31, 0x323E58u);
    ctx->pc = 0x323E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E50u;
    // 0x323e54: 0x413021  addu        $a2, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324000u, 0x323E50u, 0x323E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E58u;
label_323e58:
    // 0x323e58: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x323e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x323e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323e64: 0x3e00008  jr          $ra
    ctx->pc = 0x323E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E64u;
        // 0x323e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323E6Cu;
}
