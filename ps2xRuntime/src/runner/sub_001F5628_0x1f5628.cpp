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

// Function: sub_001F5628
// Address: 0x1f5628 - 0x1f56a0
void sub_001F5628_0x1f5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5628_0x1f5628");
#endif

    switch (ctx->pc) {
        case 0x1f564cu: goto label_1f564c;
        default: break;
    }

    ctx->pc = 0x1f5628u;

    // 0x1f5628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f562c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5630: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x1f5630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f5634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f5638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f563c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f5640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f5644: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F5644u;
    SET_GPR_U32(ctx, 31, 0x1F564Cu);
    ctx->pc = 0x1F5648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5644u;
    // 0x1f5648: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F5644u, 0x1F564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F564Cu;
label_1f564c:
    // 0x1f564c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f564cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f5650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5654: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5654u;
    {
        const bool branch_taken_0x1f5654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5654u;
        // 0x1f5658: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5654) {
            ctx->pc = 0x1F5678u;
            goto label_1f5678;
        }
    }
    ctx->pc = 0x1F565Cu;
    // 0x1f565c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f565cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f5668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f566c: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F566Cu;
    ctx->pc = 0x1F5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F566Cu;
    // 0x1f5670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5674u;
    // 0x1f5674: 0x0  nop
    ctx->pc = 0x1f5674u;
    // NOP
label_1f5678:
    // 0x1f5678: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1f5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1f567c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f567cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5680: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f5680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f5684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5688: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1f5688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1f568c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f568cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5690: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f5690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f5694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5698: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5698u;
        // 0x1f569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F56A0u;
}
