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

// Function: sub_002883C0
// Address: 0x2883c0 - 0x2884c8
void sub_002883C0_0x2883c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002883C0_0x2883c0");
#endif

    switch (ctx->pc) {
        case 0x2883fcu: goto label_2883fc;
        case 0x288414u: goto label_288414;
        case 0x28842cu: goto label_28842c;
        case 0x288444u: goto label_288444;
        case 0x28845cu: goto label_28845c;
        case 0x288474u: goto label_288474;
        case 0x288494u: goto label_288494;
        case 0x2884b0u: goto label_2884b0;
        default: break;
    }

    ctx->pc = 0x2883c0u;

    // 0x2883c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2883c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2883c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2883c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2883c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2883c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2883cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2883ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2883d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2883d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883d4: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2883D4u;
    {
        const bool branch_taken_0x2883d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2883D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883D4u;
        // 0x2883d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883d4) {
            ctx->pc = 0x2884B0u;
            goto label_2884b0;
        }
    }
    ctx->pc = 0x2883DCu;
    // 0x2883dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2883dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2883e0: 0x244275a0  addiu       $v0, $v0, 0x75A0
    ctx->pc = 0x2883e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30112));
    // 0x2883e4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2883e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2883e8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2883e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2883ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2883ECu;
    {
        const bool branch_taken_0x2883ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2883ec) {
            ctx->pc = 0x288400u;
            goto label_288400;
        }
    }
    ctx->pc = 0x2883F4u;
    // 0x2883f4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2883F4u;
    SET_GPR_U32(ctx, 31, 0x2883FCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2883F4u, 0x2883FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883FCu;
label_2883fc:
    // 0x2883fc: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2883fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
label_288400:
    // 0x288400: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x288400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x288404: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288404u;
    {
        const bool branch_taken_0x288404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288404) {
            ctx->pc = 0x288418u;
            goto label_288418;
        }
    }
    ctx->pc = 0x28840Cu;
    // 0x28840c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28840Cu;
    SET_GPR_U32(ctx, 31, 0x288414u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28840Cu, 0x288414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288414u;
label_288414:
    // 0x288414: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x288414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_288418:
    // 0x288418: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x288418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x28841c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28841Cu;
    {
        const bool branch_taken_0x28841c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28841c) {
            ctx->pc = 0x288430u;
            goto label_288430;
        }
    }
    ctx->pc = 0x288424u;
    // 0x288424: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x288424u;
    SET_GPR_U32(ctx, 31, 0x28842Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x288424u, 0x28842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28842Cu;
label_28842c:
    // 0x28842c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x28842cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_288430:
    // 0x288430: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x288430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x288434: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288434u;
    {
        const bool branch_taken_0x288434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288434) {
            ctx->pc = 0x288448u;
            goto label_288448;
        }
    }
    ctx->pc = 0x28843Cu;
    // 0x28843c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28843Cu;
    SET_GPR_U32(ctx, 31, 0x288444u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28843Cu, 0x288444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288444u;
label_288444:
    // 0x288444: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x288444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_288448:
    // 0x288448: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x288448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x28844c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28844Cu;
    {
        const bool branch_taken_0x28844c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28844c) {
            ctx->pc = 0x288460u;
            goto label_288460;
        }
    }
    ctx->pc = 0x288454u;
    // 0x288454: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x288454u;
    SET_GPR_U32(ctx, 31, 0x28845Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x288454u, 0x28845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28845Cu;
label_28845c:
    // 0x28845c: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x28845cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_288460:
    // 0x288460: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x288460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x288464: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288464u;
    {
        const bool branch_taken_0x288464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288464) {
            ctx->pc = 0x288478u;
            goto label_288478;
        }
    }
    ctx->pc = 0x28846Cu;
    // 0x28846c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28846Cu;
    SET_GPR_U32(ctx, 31, 0x288474u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28846Cu, 0x288474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288474u;
label_288474:
    // 0x288474: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x288474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_288478:
    // 0x288478: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x288478u;
    {
        const bool branch_taken_0x288478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288478u;
        // 0x28847c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288478) {
            ctx->pc = 0x288498u;
            goto label_288498;
        }
    }
    ctx->pc = 0x288480u;
    // 0x288480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288484: 0x244275c0  addiu       $v0, $v0, 0x75C0
    ctx->pc = 0x288484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x288488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28848c: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x28848Cu;
    SET_GPR_U32(ctx, 31, 0x288494u);
    ctx->pc = 0x288490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28848Cu;
    // 0x288490: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x28848Cu, 0x288494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288494u;
label_288494:
    // 0x288494: 0x0  nop
    ctx->pc = 0x288494u;
    // NOP
label_288498:
    // 0x288498: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x288498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28849c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28849cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2884a0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2884A0u;
    {
        const bool branch_taken_0x2884a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2884A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884A0u;
        // 0x2884a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884a0) {
            ctx->pc = 0x2884B0u;
            goto label_2884b0;
        }
    }
    ctx->pc = 0x2884A8u;
    // 0x2884a8: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2884A8u;
    SET_GPR_U32(ctx, 31, 0x2884B0u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2884A8u, 0x2884B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884B0u;
label_2884b0:
    // 0x2884b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2884b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2884b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2884b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2884b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2884bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2884bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2884c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2884C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884C0u;
        // 0x2884c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2884C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2884C8u;
}
