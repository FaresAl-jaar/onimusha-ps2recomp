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

// Function: sub_0037B210
// Address: 0x37b210 - 0x37b270
void sub_0037B210_0x37b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B210_0x37b210");
#endif

    switch (ctx->pc) {
        case 0x37b224u: goto label_37b224;
        case 0x37b23cu: goto label_37b23c;
        case 0x37b25cu: goto label_37b25c;
        default: break;
    }

    ctx->pc = 0x37b210u;

    // 0x37b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b21c: 0xc0dea7c  jal         func_37A9F0
    ctx->pc = 0x37B21Cu;
    SET_GPR_U32(ctx, 31, 0x37B224u);
    ctx->pc = 0x37B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B21Cu;
    // 0x37b220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A9F0u, 0x37B21Cu, 0x37B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B224u;
label_37b224:
    // 0x37b224: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37b228: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37b228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b22c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B22Cu;
    {
        const bool branch_taken_0x37b22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B22Cu;
        // 0x37b230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b22c) {
            ctx->pc = 0x37B248u;
            goto label_37b248;
        }
    }
    ctx->pc = 0x37B234u;
    // 0x37b234: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x37B234u;
    SET_GPR_U32(ctx, 31, 0x37B23Cu);
    ctx->pc = 0x37B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B234u;
    // 0x37b238: 0x24050172  addiu       $a1, $zero, 0x172 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x37B234u, 0x37B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B23Cu;
label_37b23c:
    // 0x37b23c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37B23Cu;
    {
        const bool branch_taken_0x37b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b23c) {
            ctx->pc = 0x37B260u;
            goto label_37b260;
        }
    }
    ctx->pc = 0x37B244u;
    // 0x37b244: 0x0  nop
    ctx->pc = 0x37b244u;
    // NOP
label_37b248:
    // 0x37b248: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37b248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b250: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37b254: 0xc0de878  jal         func_37A1E0
    ctx->pc = 0x37B254u;
    SET_GPR_U32(ctx, 31, 0x37B25Cu);
    ctx->pc = 0x37B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B254u;
    // 0x37b258: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A1E0u, 0x37B254u, 0x37B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B25Cu;
label_37b25c:
    // 0x37b25c: 0x0  nop
    ctx->pc = 0x37b25cu;
    // NOP
label_37b260:
    // 0x37b260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b268: 0x3e00008  jr          $ra
    ctx->pc = 0x37B268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B268u;
        // 0x37b26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B270u;
}
