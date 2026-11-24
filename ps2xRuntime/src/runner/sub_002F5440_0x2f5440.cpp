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

// Function: sub_002F5440
// Address: 0x2f5440 - 0x2f569c
void sub_002F5440_0x2f5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5440_0x2f5440");
#endif

    switch (ctx->pc) {
        case 0x2f5464u: goto label_2f5464;
        case 0x2f5480u: goto label_2f5480;
        case 0x2f54c0u: goto label_2f54c0;
        case 0x2f54d0u: goto label_2f54d0;
        case 0x2f54e0u: goto label_2f54e0;
        case 0x2f54f0u: goto label_2f54f0;
        case 0x2f5500u: goto label_2f5500;
        case 0x2f5510u: goto label_2f5510;
        case 0x2f5520u: goto label_2f5520;
        case 0x2f5530u: goto label_2f5530;
        case 0x2f5540u: goto label_2f5540;
        case 0x2f5550u: goto label_2f5550;
        case 0x2f5560u: goto label_2f5560;
        case 0x2f5570u: goto label_2f5570;
        case 0x2f5580u: goto label_2f5580;
        case 0x2f5590u: goto label_2f5590;
        case 0x2f55a4u: goto label_2f55a4;
        case 0x2f55b8u: goto label_2f55b8;
        case 0x2f55c8u: goto label_2f55c8;
        case 0x2f55d8u: goto label_2f55d8;
        case 0x2f55e8u: goto label_2f55e8;
        case 0x2f55fcu: goto label_2f55fc;
        case 0x2f5644u: goto label_2f5644;
        case 0x2f5650u: goto label_2f5650;
        case 0x2f5660u: goto label_2f5660;
        case 0x2f567cu: goto label_2f567c;
        default: break;
    }

    ctx->pc = 0x2f5440u;

    // 0x2f5440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f5444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f5448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f544c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f5450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5458: 0x90900015  lbu         $s0, 0x15($a0)
    ctx->pc = 0x2f5458u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x2f545c: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x2F545Cu;
    SET_GPR_U32(ctx, 31, 0x2F5464u);
    ctx->pc = 0x2F5460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F545Cu;
    // 0x2f5460: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x2F545Cu, 0x2F5464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5464u;
label_2f5464:
    // 0x2f5464: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2F5464u;
    {
        const bool branch_taken_0x2f5464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5464) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F546Cu;
    // 0x2f546c: 0x92420014  lbu         $v0, 0x14($s2)
    ctx->pc = 0x2f546cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2f5470: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5470u;
    {
        const bool branch_taken_0x2f5470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5470u;
        // 0x2f5474: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5470) {
            ctx->pc = 0x2F5490u;
            goto label_2f5490;
        }
    }
    ctx->pc = 0x2F5478u;
    // 0x2f5478: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2F5478u;
    SET_GPR_U32(ctx, 31, 0x2F5480u);
    ctx->pc = 0x2F547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5478u;
    // 0x2f547c: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2F5478u, 0x2F5480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5480u;
label_2f5480:
    // 0x2f5480: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2F5480u;
    {
        const bool branch_taken_0x2f5480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5480) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5488u;
    // 0x2f5488: 0xa2400014  sb          $zero, 0x14($s2)
    ctx->pc = 0x2f5488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f548c: 0x0  nop
    ctx->pc = 0x2f548cu;
    // NOP
label_2f5490:
    // 0x2f5490: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2f5490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2f5494: 0x2c410016  sltiu       $at, $v0, 0x16
    ctx->pc = 0x2f5494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x2f5498: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x2F5498u;
    {
        const bool branch_taken_0x2f5498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5498u;
        // 0x2f549c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5498) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F54A0u;
    // 0x2f54a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f54a4: 0x2463c690  addiu       $v1, $v1, -0x3970
    ctx->pc = 0x2f54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952592));
    // 0x2f54a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f54ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f54b0: 0x400008  jr          $v0
    ctx->pc = 0x2F54B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F54B8u: goto label_2f54b8;
            case 0x2F54C8u: goto label_2f54c8;
            case 0x2F54D8u: goto label_2f54d8;
            case 0x2F54E8u: goto label_2f54e8;
            case 0x2F54F8u: goto label_2f54f8;
            case 0x2F5508u: goto label_2f5508;
            case 0x2F5518u: goto label_2f5518;
            case 0x2F5528u: goto label_2f5528;
            case 0x2F5538u: goto label_2f5538;
            case 0x2F5548u: goto label_2f5548;
            case 0x2F5558u: goto label_2f5558;
            case 0x2F5568u: goto label_2f5568;
            case 0x2F5578u: goto label_2f5578;
            case 0x2F5588u: goto label_2f5588;
            case 0x2F5598u: goto label_2f5598;
            case 0x2F55B0u: goto label_2f55b0;
            case 0x2F55C0u: goto label_2f55c0;
            case 0x2F55D0u: goto label_2f55d0;
            case 0x2F55E0u: goto label_2f55e0;
            case 0x2F55F0u: goto label_2f55f0;
            case 0x2F5618u: goto label_2f5618;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F54B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F54B8u;
label_2f54b8:
    // 0x2f54b8: 0xc0bd5a8  jal         func_2F56A0
    ctx->pc = 0x2F54B8u;
    SET_GPR_U32(ctx, 31, 0x2F54C0u);
    ctx->pc = 0x2F54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54B8u;
    // 0x2f54bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F56A0u, 0x2F54B8u, 0x2F54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54C0u;
label_2f54c0:
    // 0x2f54c0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2F54C0u;
    {
        const bool branch_taken_0x2f54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C0u;
        // 0x2f54c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54c0) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F54C8u;
label_2f54c8:
    // 0x2f54c8: 0xc0bd674  jal         func_2F59D0
    ctx->pc = 0x2F54C8u;
    SET_GPR_U32(ctx, 31, 0x2F54D0u);
    ctx->pc = 0x2F54CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54C8u;
    // 0x2f54cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F59D0u, 0x2F54C8u, 0x2F54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54D0u;
label_2f54d0:
    // 0x2f54d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2F54D0u;
    {
        const bool branch_taken_0x2f54d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54D0u;
        // 0x2f54d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54d0) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F54D8u;
label_2f54d8:
    // 0x2f54d8: 0xc0bd72c  jal         func_2F5CB0
    ctx->pc = 0x2F54D8u;
    SET_GPR_U32(ctx, 31, 0x2F54E0u);
    ctx->pc = 0x2F54DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54D8u;
    // 0x2f54dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CB0u, 0x2F54D8u, 0x2F54E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54E0u;
label_2f54e0:
    // 0x2f54e0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2F54E0u;
    {
        const bool branch_taken_0x2f54e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54E0u;
        // 0x2f54e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54e0) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F54E8u;
label_2f54e8:
    // 0x2f54e8: 0xc0bd76c  jal         func_2F5DB0
    ctx->pc = 0x2F54E8u;
    SET_GPR_U32(ctx, 31, 0x2F54F0u);
    ctx->pc = 0x2F54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54E8u;
    // 0x2f54ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5DB0u, 0x2F54E8u, 0x2F54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54F0u;
label_2f54f0:
    // 0x2f54f0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F54F0u;
    {
        const bool branch_taken_0x2f54f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54F0u;
        // 0x2f54f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54f0) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F54F8u;
label_2f54f8:
    // 0x2f54f8: 0xc0bd7a8  jal         func_2F5EA0
    ctx->pc = 0x2F54F8u;
    SET_GPR_U32(ctx, 31, 0x2F5500u);
    ctx->pc = 0x2F54FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54F8u;
    // 0x2f54fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5EA0u, 0x2F54F8u, 0x2F5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5500u;
label_2f5500:
    // 0x2f5500: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F5500u;
    {
        const bool branch_taken_0x2f5500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5500u;
        // 0x2f5504: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5500) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5508u;
label_2f5508:
    // 0x2f5508: 0xc0bd82c  jal         func_2F60B0
    ctx->pc = 0x2F5508u;
    SET_GPR_U32(ctx, 31, 0x2F5510u);
    ctx->pc = 0x2F550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5508u;
    // 0x2f550c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F60B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F60B0u, 0x2F5508u, 0x2F5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5510u;
label_2f5510:
    // 0x2f5510: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2F5510u;
    {
        const bool branch_taken_0x2f5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5510u;
        // 0x2f5514: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5510) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5518u;
label_2f5518:
    // 0x2f5518: 0xc0bd864  jal         func_2F6190
    ctx->pc = 0x2F5518u;
    SET_GPR_U32(ctx, 31, 0x2F5520u);
    ctx->pc = 0x2F551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5518u;
    // 0x2f551c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6190u, 0x2F5518u, 0x2F5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5520u;
label_2f5520:
    // 0x2f5520: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2F5520u;
    {
        const bool branch_taken_0x2f5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5520u;
        // 0x2f5524: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5520) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5528u;
label_2f5528:
    // 0x2f5528: 0xc0bd8b4  jal         func_2F62D0
    ctx->pc = 0x2F5528u;
    SET_GPR_U32(ctx, 31, 0x2F5530u);
    ctx->pc = 0x2F552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5528u;
    // 0x2f552c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F62D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F62D0u, 0x2F5528u, 0x2F5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5530u;
label_2f5530:
    // 0x2f5530: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F5530u;
    {
        const bool branch_taken_0x2f5530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5530u;
        // 0x2f5534: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5530) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5538u;
label_2f5538:
    // 0x2f5538: 0xc0bd880  jal         func_2F6200
    ctx->pc = 0x2F5538u;
    SET_GPR_U32(ctx, 31, 0x2F5540u);
    ctx->pc = 0x2F553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5538u;
    // 0x2f553c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6200u, 0x2F5538u, 0x2F5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5540u;
label_2f5540:
    // 0x2f5540: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2F5540u;
    {
        const bool branch_taken_0x2f5540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5540u;
        // 0x2f5544: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5540) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5548u;
label_2f5548:
    // 0x2f5548: 0xc0bd8dc  jal         func_2F6370
    ctx->pc = 0x2F5548u;
    SET_GPR_U32(ctx, 31, 0x2F5550u);
    ctx->pc = 0x2F554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5548u;
    // 0x2f554c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6370u, 0x2F5548u, 0x2F5550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5550u;
label_2f5550:
    // 0x2f5550: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F5550u;
    {
        const bool branch_taken_0x2f5550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5550u;
        // 0x2f5554: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5550) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5558u;
label_2f5558:
    // 0x2f5558: 0xc0bd930  jal         func_2F64C0
    ctx->pc = 0x2F5558u;
    SET_GPR_U32(ctx, 31, 0x2F5560u);
    ctx->pc = 0x2F555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5558u;
    // 0x2f555c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F64C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F64C0u, 0x2F5558u, 0x2F5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5560u;
label_2f5560:
    // 0x2f5560: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2F5560u;
    {
        const bool branch_taken_0x2f5560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5560u;
        // 0x2f5564: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5560) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5568u;
label_2f5568:
    // 0x2f5568: 0xc0bd954  jal         func_2F6550
    ctx->pc = 0x2F5568u;
    SET_GPR_U32(ctx, 31, 0x2F5570u);
    ctx->pc = 0x2F556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5568u;
    // 0x2f556c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6550u, 0x2F5568u, 0x2F5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5570u;
label_2f5570:
    // 0x2f5570: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F5570u;
    {
        const bool branch_taken_0x2f5570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5570u;
        // 0x2f5574: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5570) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5578u;
label_2f5578:
    // 0x2f5578: 0xc0bd980  jal         func_2F6600
    ctx->pc = 0x2F5578u;
    SET_GPR_U32(ctx, 31, 0x2F5580u);
    ctx->pc = 0x2F557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5578u;
    // 0x2f557c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6600u, 0x2F5578u, 0x2F5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5580u;
label_2f5580:
    // 0x2f5580: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2F5580u;
    {
        const bool branch_taken_0x2f5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5580u;
        // 0x2f5584: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5580) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5588u;
label_2f5588:
    // 0x2f5588: 0xc0bd9d0  jal         func_2F6740
    ctx->pc = 0x2F5588u;
    SET_GPR_U32(ctx, 31, 0x2F5590u);
    ctx->pc = 0x2F558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5588u;
    // 0x2f558c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6740u, 0x2F5588u, 0x2F5590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5590u;
label_2f5590:
    // 0x2f5590: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F5590u;
    {
        const bool branch_taken_0x2f5590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5590u;
        // 0x2f5594: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5590) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5598u;
label_2f5598:
    // 0x2f5598: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2f5598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2f559c: 0xc0ba5fc  jal         func_2E97F0
    ctx->pc = 0x2F559Cu;
    SET_GPR_U32(ctx, 31, 0x2F55A4u);
    ctx->pc = 0x2F55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F559Cu;
    // 0x2f55a0: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E97F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E97F0u, 0x2F559Cu, 0x2F55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55A4u;
label_2f55a4:
    // 0x2f55a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F55A4u;
    {
        const bool branch_taken_0x2f55a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55A4u;
        // 0x2f55a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55a4) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F55ACu;
    // 0x2f55ac: 0x0  nop
    ctx->pc = 0x2f55acu;
    // NOP
label_2f55b0:
    // 0x2f55b0: 0xc0bd9fc  jal         func_2F67F0
    ctx->pc = 0x2F55B0u;
    SET_GPR_U32(ctx, 31, 0x2F55B8u);
    ctx->pc = 0x2F55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55B0u;
    // 0x2f55b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F67F0u, 0x2F55B0u, 0x2F55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55B8u;
label_2f55b8:
    // 0x2f55b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F55B8u;
    {
        const bool branch_taken_0x2f55b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55B8u;
        // 0x2f55bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55b8) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F55C0u;
label_2f55c0:
    // 0x2f55c0: 0xc0bda44  jal         func_2F6910
    ctx->pc = 0x2F55C0u;
    SET_GPR_U32(ctx, 31, 0x2F55C8u);
    ctx->pc = 0x2F55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55C0u;
    // 0x2f55c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6910u, 0x2F55C0u, 0x2F55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55C8u;
label_2f55c8:
    // 0x2f55c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F55C8u;
    {
        const bool branch_taken_0x2f55c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55C8u;
        // 0x2f55cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55c8) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F55D0u;
label_2f55d0:
    // 0x2f55d0: 0xc0bda78  jal         func_2F69E0
    ctx->pc = 0x2F55D0u;
    SET_GPR_U32(ctx, 31, 0x2F55D8u);
    ctx->pc = 0x2F55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55D0u;
    // 0x2f55d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F69E0u, 0x2F55D0u, 0x2F55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55D8u;
label_2f55d8:
    // 0x2f55d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F55D8u;
    {
        const bool branch_taken_0x2f55d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D8u;
        // 0x2f55dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55d8) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F55E0u;
label_2f55e0:
    // 0x2f55e0: 0xc0bdb68  jal         func_2F6DA0
    ctx->pc = 0x2F55E0u;
    SET_GPR_U32(ctx, 31, 0x2F55E8u);
    ctx->pc = 0x2F55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55E0u;
    // 0x2f55e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6DA0u, 0x2F55E0u, 0x2F55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55E8u;
label_2f55e8:
    // 0x2f55e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F55E8u;
    {
        const bool branch_taken_0x2f55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55E8u;
        // 0x2f55ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55e8) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F55F0u;
label_2f55f0:
    // 0x2f55f0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x2f55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x2f55f4: 0xc06543c  jal         func_1950F0
    ctx->pc = 0x2F55F4u;
    SET_GPR_U32(ctx, 31, 0x2F55FCu);
    ctx->pc = 0x2F55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55F4u;
    // 0x2f55f8: 0x24843900  addiu       $a0, $a0, 0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950F0u, 0x2F55F4u, 0x2F55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55FCu;
label_2f55fc:
    // 0x2f55fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F55FCu;
    {
        const bool branch_taken_0x2f55fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55FCu;
        // 0x2f5600: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55fc) {
            ctx->pc = 0x2F5610u;
            goto label_2f5610;
        }
    }
    ctx->pc = 0x2F5604u;
    // 0x2f5604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5604u;
    {
        const bool branch_taken_0x2f5604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5604) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F560Cu;
    // 0x2f560c: 0x0  nop
    ctx->pc = 0x2f560cu;
    // NOP
label_2f5610:
    // 0x2f5610: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f5610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5614: 0x0  nop
    ctx->pc = 0x2f5614u;
    // NOP
label_2f5618:
    // 0x2f5618: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5618u;
    {
        const bool branch_taken_0x2f5618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5618) {
            ctx->pc = 0x2F5680u;
            goto label_2f5680;
        }
    }
    ctx->pc = 0x2F5620u;
    // 0x2f5620: 0x92420015  lbu         $v0, 0x15($s2)
    ctx->pc = 0x2f5620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x2f5624: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5624u;
    {
        const bool branch_taken_0x2f5624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5624) {
            ctx->pc = 0x2F5638u;
            goto label_2f5638;
        }
    }
    ctx->pc = 0x2F562Cu;
    // 0x2f562c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F562Cu;
    {
        const bool branch_taken_0x2f562c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f562c) {
            ctx->pc = 0x2F5680u;
            goto label_2f5680;
        }
    }
    ctx->pc = 0x2F5634u;
    // 0x2f5634: 0x0  nop
    ctx->pc = 0x2f5634u;
    // NOP
label_2f5638:
    // 0x2f5638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f5638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f563c: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x2F563Cu;
    SET_GPR_U32(ctx, 31, 0x2F5644u);
    ctx->pc = 0x2F5640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F563Cu;
    // 0x2f5640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x2F563Cu, 0x2F5644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5644u;
label_2f5644:
    // 0x2f5644: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f5644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f5648: 0xc095030  jal         func_2540C0
    ctx->pc = 0x2F5648u;
    SET_GPR_U32(ctx, 31, 0x2F5650u);
    ctx->pc = 0x2F564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5648u;
    // 0x2f564c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540C0u, 0x2F5648u, 0x2F5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5650u;
label_2f5650:
    // 0x2f5650: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f5650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f5654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5658: 0xc095028  jal         func_2540A0
    ctx->pc = 0x2F5658u;
    SET_GPR_U32(ctx, 31, 0x2F5660u);
    ctx->pc = 0x2F565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5658u;
    // 0x2f565c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540A0u, 0x2F5658u, 0x2F5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5660u;
label_2f5660:
    // 0x2f5660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5664: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f5664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f566c: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x2f566cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x2f5670: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2f5670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f5674: 0xc09c4e8  jal         func_2713A0
    ctx->pc = 0x2F5674u;
    SET_GPR_U32(ctx, 31, 0x2F567Cu);
    ctx->pc = 0x2F5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5674u;
    // 0x2f5678: 0x3c094000  lui         $t1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2713A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2713A0u, 0x2F5674u, 0x2F567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F567Cu;
label_2f567c:
    // 0x2f567c: 0x0  nop
    ctx->pc = 0x2f567cu;
    // NOP
label_2f5680:
    // 0x2f5680: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f5680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f5684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f568c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f568cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5694: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5694u;
        // 0x2f5698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F569Cu;
}
