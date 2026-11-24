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

// Function: sub_0021EC60
// Address: 0x21ec60 - 0x21ecbc
void sub_0021EC60_0x21ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EC60_0x21ec60");
#endif

    switch (ctx->pc) {
        case 0x21ec74u: goto label_21ec74;
        case 0x21eca8u: goto label_21eca8;
        default: break;
    }

    ctx->pc = 0x21ec60u;

    // 0x21ec60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ec64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ec68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ec6c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21EC6Cu;
    SET_GPR_U32(ctx, 31, 0x21EC74u);
    ctx->pc = 0x21EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC6Cu;
    // 0x21ec70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21EC6Cu, 0x21EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC74u;
label_21ec74:
    // 0x21ec74: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21ec78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21ec7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ec80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EC80u;
    {
        const bool branch_taken_0x21ec80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC80u;
        // 0x21ec84: 0x34a50153  ori         $a1, $a1, 0x153 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)339);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec80) {
            ctx->pc = 0x21ECA0u;
            goto label_21eca0;
        }
    }
    ctx->pc = 0x21EC88u;
    // 0x21ec88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ec88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ec8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ec8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ec94: 0x80848e0  j           func_212380
    ctx->pc = 0x21EC94u;
    ctx->pc = 0x21EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC94u;
    // 0x21ec98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21EC9Cu;
    // 0x21ec9c: 0x0  nop
    ctx->pc = 0x21ec9cu;
    // NOP
label_21eca0:
    // 0x21eca0: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21ECA0u;
    SET_GPR_U32(ctx, 31, 0x21ECA8u);
    ctx->pc = 0x21ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECA0u;
    // 0x21eca4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21ECA0u, 0x21ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECA8u;
label_21eca8:
    // 0x21eca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21eca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ecacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ecb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ecb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ecb4: 0x8087000  j           func_21C000
    ctx->pc = 0x21ECB4u;
    ctx->pc = 0x21ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECB4u;
    // 0x21ecb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C000u;
    sub_0021C000_0x21c000(rdram, ctx, runtime); return;
    ctx->pc = 0x21ECBCu;
}
