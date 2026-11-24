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

// Function: sub_001FE728
// Address: 0x1fe728 - 0x1fe7b0
void sub_001FE728_0x1fe728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE728_0x1fe728");
#endif

    switch (ctx->pc) {
        case 0x1fe760u: goto label_1fe760;
        default: break;
    }

    ctx->pc = 0x1fe728u;

    // 0x1fe728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe72c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe738: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fe738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe73c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe740: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe744: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE744u;
    {
        const bool branch_taken_0x1fe744 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE744u;
        // 0x1fe748: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe744) {
            ctx->pc = 0x1FE758u;
            goto label_1fe758;
        }
    }
    ctx->pc = 0x1FE74Cu;
    // 0x1fe74c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1fe74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1fe750: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FE750u;
    {
        const bool branch_taken_0x1fe750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE750u;
        // 0x1fe754: 0x24448140  addiu       $a0, $v0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe750) {
            ctx->pc = 0x1FE78Cu;
            goto label_1fe78c;
        }
    }
    ctx->pc = 0x1FE758u;
label_1fe758:
    // 0x1fe758: 0xc080496  jal         func_201258
    ctx->pc = 0x1FE758u;
    SET_GPR_U32(ctx, 31, 0x1FE760u);
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FE758u, 0x1FE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE760u;
label_1fe760:
    // 0x1fe760: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fe764: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE764u;
    {
        const bool branch_taken_0x1fe764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE764u;
        // 0x1fe768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe764) {
            ctx->pc = 0x1FE788u;
            goto label_1fe788;
        }
    }
    ctx->pc = 0x1FE76Cu;
    // 0x1fe76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe770: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x1fe770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x1fe774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe77c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fe77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe780: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FE780u;
    ctx->pc = 0x1FE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE780u;
    // 0x1fe784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FE788u;
label_1fe788:
    // 0x1fe788: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1fe78c:
    // 0x1fe78c: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x1fe78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1fe790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe794: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1fe794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x1fe798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe7a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe7a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fe7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7A8u;
        // 0x1fe7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE7B0u;
}
