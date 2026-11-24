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

// Function: sub_00227C50
// Address: 0x227c50 - 0x227ccc
void sub_00227C50_0x227c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C50_0x227c50");
#endif

    switch (ctx->pc) {
        case 0x227c88u: goto label_227c88;
        default: break;
    }

    ctx->pc = 0x227c50u;

    // 0x227c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227c60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c64: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227C64u;
    {
        const bool branch_taken_0x227c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C64u;
        // 0x227c68: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c64) {
            ctx->pc = 0x227C74u;
            goto label_227c74;
        }
    }
    ctx->pc = 0x227C6Cu;
    // 0x227c6c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227C6Cu;
    {
        const bool branch_taken_0x227c6c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x227c6c) {
            ctx->pc = 0x227C80u;
            goto label_227c80;
        }
    }
    ctx->pc = 0x227C74u;
label_227c74:
    // 0x227c74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x227C74u;
    {
        const bool branch_taken_0x227c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C74u;
        // 0x227c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c74) {
            ctx->pc = 0x227CB8u;
            goto label_227cb8;
        }
    }
    ctx->pc = 0x227C7Cu;
    // 0x227c7c: 0x0  nop
    ctx->pc = 0x227c7cu;
    // NOP
label_227c80:
    // 0x227c80: 0xc089e2c  jal         func_2278B0
    ctx->pc = 0x227C80u;
    SET_GPR_U32(ctx, 31, 0x227C88u);
    ctx->pc = 0x2278B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278B0u, 0x227C80u, 0x227C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C88u;
label_227c88:
    // 0x227c88: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x227c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227c8c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x227c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x227c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x227C98u;
    {
        const bool branch_taken_0x227c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C98u;
        // 0x227c9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c98) {
            ctx->pc = 0x227CB8u;
            goto label_227cb8;
        }
    }
    ctx->pc = 0x227CA0u;
    // 0x227ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227cac: 0x8089f34  j           func_227CD0
    ctx->pc = 0x227CACu;
    ctx->pc = 0x227CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CACu;
    // 0x227cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227CD0u;
    sub_00227CD0_0x227cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x227CB4u;
    // 0x227cb4: 0x0  nop
    ctx->pc = 0x227cb4u;
    // NOP
label_227cb8:
    // 0x227cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x227CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CC4u;
        // 0x227cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227CCCu;
}
