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

// Function: sub_00149D50
// Address: 0x149d50 - 0x149df0
void sub_00149D50_0x149d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D50_0x149d50");
#endif

    switch (ctx->pc) {
        case 0x149d9cu: goto label_149d9c;
        case 0x149dc8u: goto label_149dc8;
        default: break;
    }

    ctx->pc = 0x149d50u;

    // 0x149d50: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x149d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x149d54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149d58: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x149d5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149d60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149d68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x149d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x149d6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149d70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x149d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x149d74: 0x24500220  addiu       $s0, $v0, 0x220
    ctx->pc = 0x149d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x149d78: 0x80420290  lb          $v0, 0x290($v0)
    ctx->pc = 0x149d78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x149d7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x149D7Cu;
    {
        const bool branch_taken_0x149d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d7c) {
            ctx->pc = 0x149DB8u;
            goto label_149db8;
        }
    }
    ctx->pc = 0x149D84u;
    // 0x149d84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x149d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x149d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x149d90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d94: 0xc0485ae  jal         func_1216B8
    ctx->pc = 0x149D94u;
    SET_GPR_U32(ctx, 31, 0x149D9Cu);
    ctx->pc = 0x149D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D94u;
    // 0x149d98: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216B8u, 0x149D94u, 0x149D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D9Cu;
label_149d9c:
    // 0x149d9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149D9Cu;
    {
        const bool branch_taken_0x149d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149d9c) {
            ctx->pc = 0x149DB0u;
            goto label_149db0;
        }
    }
    ctx->pc = 0x149DA4u;
    // 0x149da4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x149DA4u;
    {
        const bool branch_taken_0x149da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DA4u;
        // 0x149da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149da4) {
            ctx->pc = 0x149DE0u;
            goto label_149de0;
        }
    }
    ctx->pc = 0x149DACu;
    // 0x149dac: 0x0  nop
    ctx->pc = 0x149dacu;
    // NOP
label_149db0:
    // 0x149db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149db4: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x149db4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
label_149db8:
    // 0x149db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149dbc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x149dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x149dc0: 0xc048566  jal         func_121598
    ctx->pc = 0x149DC0u;
    SET_GPR_U32(ctx, 31, 0x149DC8u);
    ctx->pc = 0x149DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149DC0u;
    // 0x149dc4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x149DC0u, 0x149DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DC8u;
label_149dc8:
    // 0x149dc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149DC8u;
    {
        const bool branch_taken_0x149dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149dc8) {
            ctx->pc = 0x149DD8u;
            goto label_149dd8;
        }
    }
    ctx->pc = 0x149DD0u;
    // 0x149dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149DD0u;
    {
        const bool branch_taken_0x149dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DD0u;
        // 0x149dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149dd0) {
            ctx->pc = 0x149DE0u;
            goto label_149de0;
        }
    }
    ctx->pc = 0x149DD8u;
label_149dd8:
    // 0x149dd8: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x149dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x149ddc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_149de0:
    // 0x149de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149de8: 0x3e00008  jr          $ra
    ctx->pc = 0x149DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DE8u;
        // 0x149dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149DF0u;
}
