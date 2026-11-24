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

// Function: sub_003B8D30
// Address: 0x3b8d30 - 0x3b8dc4
void sub_003B8D30_0x3b8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8D30_0x3b8d30");
#endif

    switch (ctx->pc) {
        case 0x3b8d54u: goto label_3b8d54;
        case 0x3b8d60u: goto label_3b8d60;
        case 0x3b8d90u: goto label_3b8d90;
        case 0x3b8d9cu: goto label_3b8d9c;
        default: break;
    }

    ctx->pc = 0x3b8d30u;

    // 0x3b8d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b8d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b8d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b8d3c: 0x90822b5a  lbu         $v0, 0x2B5A($a0)
    ctx->pc = 0x3b8d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11098)));
    // 0x3b8d40: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x3b8d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b8d44: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B8D44u;
    {
        const bool branch_taken_0x3b8d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D44u;
        // 0x3b8d48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d44) {
            ctx->pc = 0x3B8D88u;
            goto label_3b8d88;
        }
    }
    ctx->pc = 0x3B8D4Cu;
    // 0x3b8d4c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B8D4Cu;
    SET_GPR_U32(ctx, 31, 0x3B8D54u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B8D4Cu, 0x3B8D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8D54u;
label_3b8d54:
    // 0x3b8d54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b8d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b8d58: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3B8D58u;
    SET_GPR_U32(ctx, 31, 0x3B8D60u);
    ctx->pc = 0x3B8D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8D58u;
    // 0x3b8d5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3B8D58u, 0x3B8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8D60u;
label_3b8d60:
    // 0x3b8d60: 0x92032b5a  lbu         $v1, 0x2B5A($s0)
    ctx->pc = 0x3b8d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11098)));
    // 0x3b8d64: 0x64440004  daddiu      $a0, $v0, 0x4
    ctx->pc = 0x3b8d64u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x3b8d68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b8d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b8d6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3b8d6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b8d70: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x3b8d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b8d74: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8D74u;
    {
        const bool branch_taken_0x3b8d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8d74) {
            ctx->pc = 0x3B8DA8u;
            goto label_3b8da8;
        }
    }
    ctx->pc = 0x3B8D7Cu;
    // 0x3b8d7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B8D7Cu;
    {
        const bool branch_taken_0x3b8d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D7Cu;
        // 0x3b8d80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d7c) {
            ctx->pc = 0x3B8DA8u;
            goto label_3b8da8;
        }
    }
    ctx->pc = 0x3B8D84u;
    // 0x3b8d84: 0x0  nop
    ctx->pc = 0x3b8d84u;
    // NOP
label_3b8d88:
    // 0x3b8d88: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B8D88u;
    SET_GPR_U32(ctx, 31, 0x3B8D90u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B8D88u, 0x3B8D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8D90u;
label_3b8d90:
    // 0x3b8d90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b8d94: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3B8D94u;
    SET_GPR_U32(ctx, 31, 0x3B8D9Cu);
    ctx->pc = 0x3B8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8D94u;
    // 0x3b8d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3B8D94u, 0x3B8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8D9Cu;
label_3b8d9c:
    // 0x3b8d9c: 0x64430005  daddiu      $v1, $v0, 0x5
    ctx->pc = 0x3b8d9cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)5);
    // 0x3b8da0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3b8da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8da4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3b8da4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3b8da8:
    // 0x3b8da8: 0xa2042b5a  sb          $a0, 0x2B5A($s0)
    ctx->pc = 0x3b8da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11098), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8dac: 0xa2002b5b  sb          $zero, 0x2B5B($s0)
    ctx->pc = 0x3b8dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8db0: 0xa2002b5c  sb          $zero, 0x2B5C($s0)
    ctx->pc = 0x3b8db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DBCu;
        // 0x3b8dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8DC4u;
}
