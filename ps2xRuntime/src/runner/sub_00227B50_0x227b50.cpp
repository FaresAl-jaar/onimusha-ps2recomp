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

// Function: sub_00227B50
// Address: 0x227b50 - 0x227bcc
void sub_00227B50_0x227b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B50_0x227b50");
#endif

    switch (ctx->pc) {
        case 0x227b88u: goto label_227b88;
        default: break;
    }

    ctx->pc = 0x227b50u;

    // 0x227b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227b60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b64: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227B64u;
    {
        const bool branch_taken_0x227b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B64u;
        // 0x227b68: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b64) {
            ctx->pc = 0x227B74u;
            goto label_227b74;
        }
    }
    ctx->pc = 0x227B6Cu;
    // 0x227b6c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227B6Cu;
    {
        const bool branch_taken_0x227b6c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x227b6c) {
            ctx->pc = 0x227B80u;
            goto label_227b80;
        }
    }
    ctx->pc = 0x227B74u;
label_227b74:
    // 0x227b74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x227B74u;
    {
        const bool branch_taken_0x227b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B74u;
        // 0x227b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b74) {
            ctx->pc = 0x227BB8u;
            goto label_227bb8;
        }
    }
    ctx->pc = 0x227B7Cu;
    // 0x227b7c: 0x0  nop
    ctx->pc = 0x227b7cu;
    // NOP
label_227b80:
    // 0x227b80: 0xc089e2c  jal         func_2278B0
    ctx->pc = 0x227B80u;
    SET_GPR_U32(ctx, 31, 0x227B88u);
    ctx->pc = 0x2278B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278B0u, 0x227B80u, 0x227B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B88u;
label_227b88:
    // 0x227b88: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x227b8c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x227b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x227b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x227B98u;
    {
        const bool branch_taken_0x227b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B98u;
        // 0x227b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b98) {
            ctx->pc = 0x227BB8u;
            goto label_227bb8;
        }
    }
    ctx->pc = 0x227BA0u;
    // 0x227ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227bac: 0x8089f34  j           func_227CD0
    ctx->pc = 0x227BACu;
    ctx->pc = 0x227BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BACu;
    // 0x227bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227CD0u;
    sub_00227CD0_0x227cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x227BB4u;
    // 0x227bb4: 0x0  nop
    ctx->pc = 0x227bb4u;
    // NOP
label_227bb8:
    // 0x227bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x227BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BC4u;
        // 0x227bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227BCCu;
}
