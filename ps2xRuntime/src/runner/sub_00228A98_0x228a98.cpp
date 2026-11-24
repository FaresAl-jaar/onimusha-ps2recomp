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

// Function: sub_00228A98
// Address: 0x228a98 - 0x228af0
void sub_00228A98_0x228a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228A98_0x228a98");
#endif

    switch (ctx->pc) {
        case 0x228ad4u: goto label_228ad4;
        default: break;
    }

    ctx->pc = 0x228a98u;

    // 0x228a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228aa0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x228aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x228aa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x228aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x228aa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x228aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x228aac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x228aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x228ab0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x228ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228ab4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x228ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x228ab8: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x228abc: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x228abcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x228ac0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x228AC0u;
    {
        const bool branch_taken_0x228ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228ac0) {
            ctx->pc = 0x228AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228AC0u;
            // 0x228ac4: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228AE0u;
            goto label_228ae0;
        }
    }
    ctx->pc = 0x228AC8u;
    // 0x228ac8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228acc: 0xc08a0d4  jal         func_228350
    ctx->pc = 0x228ACCu;
    SET_GPR_U32(ctx, 31, 0x228AD4u);
    ctx->pc = 0x228AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228ACCu;
    // 0x228ad0: 0x24849788  addiu       $a0, $a0, -0x6878 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228350u, 0x228ACCu, 0x228AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AD4u;
label_228ad4:
    // 0x228ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x228AD4u;
    {
        const bool branch_taken_0x228ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AD4u;
        // 0x228ad8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ad4) {
            ctx->pc = 0x228AE4u;
            goto label_228ae4;
        }
    }
    ctx->pc = 0x228ADCu;
    // 0x228adc: 0x0  nop
    ctx->pc = 0x228adcu;
    // NOP
label_228ae0:
    // 0x228ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228ae4:
    // 0x228ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x228AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AE8u;
        // 0x228aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228AF0u;
}
