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

// Function: sub_0012F1F0
// Address: 0x12f1f0 - 0x12f294
void sub_0012F1F0_0x12f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F1F0_0x12f1f0");
#endif

    switch (ctx->pc) {
        case 0x12f228u: goto label_12f228;
        case 0x12f238u: goto label_12f238;
        case 0x12f248u: goto label_12f248;
        case 0x12f258u: goto label_12f258;
        case 0x12f268u: goto label_12f268;
        case 0x12f278u: goto label_12f278;
        case 0x12f288u: goto label_12f288;
        default: break;
    }

    ctx->pc = 0x12f1f0u;

    // 0x12f1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f1f4: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x12f1f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x12f1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f1fc: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x12F1FCu;
    {
        const bool branch_taken_0x12f1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1FCu;
        // 0x12f200: 0xa4850026  sh          $a1, 0x26($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1fc) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F204u;
    // 0x12f204: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12f204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12f208: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x12f208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x12f20c: 0x24a54590  addiu       $a1, $a1, 0x4590
    ctx->pc = 0x12f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17808));
    // 0x12f210: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f214: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12f214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f218: 0x600008  jr          $v1
    ctx->pc = 0x12F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F220u: goto label_12f220;
            case 0x12F230u: goto label_12f230;
            case 0x12F240u: goto label_12f240;
            case 0x12F250u: goto label_12f250;
            case 0x12F260u: goto label_12f260;
            case 0x12F270u: goto label_12f270;
            case 0x12F280u: goto label_12f280;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12F220u;
label_12f220:
    // 0x12f220: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12F220u;
    SET_GPR_U32(ctx, 31, 0x12F228u);
    ctx->pc = 0x12F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F220u;
    // 0x12f224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12F220u, 0x12F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F228u;
label_12f228:
    // 0x12f228: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12F228u;
    {
        const bool branch_taken_0x12f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f228) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F230u;
label_12f230:
    // 0x12f230: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12F230u;
    SET_GPR_U32(ctx, 31, 0x12F238u);
    ctx->pc = 0x12F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F230u;
    // 0x12f234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12F230u, 0x12F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F238u;
label_12f238:
    // 0x12f238: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12F238u;
    {
        const bool branch_taken_0x12f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f238) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F240u;
label_12f240:
    // 0x12f240: 0xc04bd44  jal         func_12F510
    ctx->pc = 0x12F240u;
    SET_GPR_U32(ctx, 31, 0x12F248u);
    ctx->pc = 0x12F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F510u, 0x12F240u, 0x12F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F248u;
label_12f248:
    // 0x12f248: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12F248u;
    {
        const bool branch_taken_0x12f248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f248) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F250u;
label_12f250:
    // 0x12f250: 0xc04bda4  jal         func_12F690
    ctx->pc = 0x12F250u;
    SET_GPR_U32(ctx, 31, 0x12F258u);
    ctx->pc = 0x12F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F250u;
    // 0x12f254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F690u, 0x12F250u, 0x12F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F258u;
label_12f258:
    // 0x12f258: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F258u;
    {
        const bool branch_taken_0x12f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f258) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F260u;
label_12f260:
    // 0x12f260: 0xc04bda4  jal         func_12F690
    ctx->pc = 0x12F260u;
    SET_GPR_U32(ctx, 31, 0x12F268u);
    ctx->pc = 0x12F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F260u;
    // 0x12f264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F690u, 0x12F260u, 0x12F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F268u;
label_12f268:
    // 0x12f268: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F268u;
    {
        const bool branch_taken_0x12f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f268) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F270u;
label_12f270:
    // 0x12f270: 0xc04bde4  jal         func_12F790
    ctx->pc = 0x12F270u;
    SET_GPR_U32(ctx, 31, 0x12F278u);
    ctx->pc = 0x12F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F270u;
    // 0x12f274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F790u, 0x12F270u, 0x12F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F278u;
label_12f278:
    // 0x12f278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12F278u;
    {
        const bool branch_taken_0x12f278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f278) {
            ctx->pc = 0x12F288u;
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F280u;
label_12f280:
    // 0x12f280: 0xc04bde4  jal         func_12F790
    ctx->pc = 0x12F280u;
    SET_GPR_U32(ctx, 31, 0x12F288u);
    ctx->pc = 0x12F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F280u;
    // 0x12f284: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F790u, 0x12F280u, 0x12F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F288u;
label_12f288:
    // 0x12f288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f28c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F28Cu;
        // 0x12f290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F294u;
}
