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

// Function: sub_0024F440
// Address: 0x24f440 - 0x24f49c
void sub_0024F440_0x24f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F440_0x24f440");
#endif

    switch (ctx->pc) {
        case 0x24f440u: goto label_24f440;
        case 0x24f444u: goto label_24f444;
        case 0x24f448u: goto label_24f448;
        case 0x24f44cu: goto label_24f44c;
        case 0x24f450u: goto label_24f450;
        case 0x24f454u: goto label_24f454;
        case 0x24f458u: goto label_24f458;
        case 0x24f45cu: goto label_24f45c;
        case 0x24f460u: goto label_24f460;
        case 0x24f464u: goto label_24f464;
        case 0x24f468u: goto label_24f468;
        case 0x24f46cu: goto label_24f46c;
        case 0x24f470u: goto label_24f470;
        case 0x24f474u: goto label_24f474;
        case 0x24f478u: goto label_24f478;
        case 0x24f47cu: goto label_24f47c;
        case 0x24f480u: goto label_24f480;
        case 0x24f484u: goto label_24f484;
        case 0x24f488u: goto label_24f488;
        case 0x24f48cu: goto label_24f48c;
        case 0x24f490u: goto label_24f490;
        case 0x24f494u: goto label_24f494;
        case 0x24f498u: goto label_24f498;
        default: break;
    }

    ctx->pc = 0x24f440u;

label_24f440:
    // 0x24f440: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24f444:
    // 0x24f444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24f448:
    // 0x24f448: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29912)));
label_24f44c:
    // 0x24f44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f450:
    // 0x24f450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24f454:
    // 0x24f454: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_24f458:
    if (ctx->pc == 0x24F458u) {
        ctx->pc = 0x24F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F454u;
        // 0x24f458: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F45Cu;
        goto label_24f45c;
    }
    ctx->pc = 0x24F454u;
    {
        const bool branch_taken_0x24f454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F454u;
        // 0x24f458: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f454) {
            ctx->pc = 0x24F46Cu;
            goto label_24f46c;
        }
    }
    ctx->pc = 0x24F45Cu;
label_24f45c:
    // 0x24f45c: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_24f460:
    // 0x24f460: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29904)));
label_24f464:
    // 0x24f464: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_24f468:
    if (ctx->pc == 0x24F468u) {
        ctx->pc = 0x24F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F464u;
        // 0x24f468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F46Cu;
        goto label_24f46c;
    }
    ctx->pc = 0x24F464u;
    {
        const bool branch_taken_0x24f464 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F464u;
        // 0x24f468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f464) {
            ctx->pc = 0x24F490u;
            goto label_24f490;
        }
    }
    ctx->pc = 0x24F46Cu;
label_24f46c:
    // 0x24f46c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x24f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_24f470:
    // 0x24f470: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24f470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24f474:
    // 0x24f474: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f478:
    // 0x24f478: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24f47c:
    // 0x24f47c: 0x40f809  jalr        $v0
label_24f480:
    if (ctx->pc == 0x24F480u) {
        ctx->pc = 0x24F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F47Cu;
        // 0x24f480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F484u;
        goto label_24f484;
    }
    ctx->pc = 0x24F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F484u);
        ctx->pc = 0x24F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F47Cu;
        // 0x24f480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F47Cu, 0x24F484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F484u;
label_24f484:
    // 0x24f484: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x24f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_24f488:
    // 0x24f488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24f48c:
    // 0x24f48c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x24f48cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_24f490:
    // 0x24f490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f494:
    // 0x24f494: 0x3e00008  jr          $ra
label_24f498:
    if (ctx->pc == 0x24F498u) {
        ctx->pc = 0x24F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F494u;
        // 0x24f498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F49Cu;
        goto label_fallthrough_0x24f494;
    }
    ctx->pc = 0x24F494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F494u;
        // 0x24f498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24f494:
    ctx->pc = 0x24F49Cu;
}
