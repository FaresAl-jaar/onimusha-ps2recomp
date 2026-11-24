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

// Function: sub_001EF460
// Address: 0x1ef460 - 0x1ef5d4
void sub_001EF460_0x1ef460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF460_0x1ef460");
#endif

    switch (ctx->pc) {
        case 0x1ef460u: goto label_1ef460;
        case 0x1ef464u: goto label_1ef464;
        case 0x1ef468u: goto label_1ef468;
        case 0x1ef46cu: goto label_1ef46c;
        case 0x1ef470u: goto label_1ef470;
        case 0x1ef474u: goto label_1ef474;
        case 0x1ef478u: goto label_1ef478;
        case 0x1ef47cu: goto label_1ef47c;
        case 0x1ef480u: goto label_1ef480;
        case 0x1ef484u: goto label_1ef484;
        case 0x1ef488u: goto label_1ef488;
        case 0x1ef48cu: goto label_1ef48c;
        case 0x1ef490u: goto label_1ef490;
        case 0x1ef494u: goto label_1ef494;
        case 0x1ef498u: goto label_1ef498;
        case 0x1ef49cu: goto label_1ef49c;
        case 0x1ef4a0u: goto label_1ef4a0;
        case 0x1ef4a4u: goto label_1ef4a4;
        case 0x1ef4a8u: goto label_1ef4a8;
        case 0x1ef4acu: goto label_1ef4ac;
        case 0x1ef4b0u: goto label_1ef4b0;
        case 0x1ef4b4u: goto label_1ef4b4;
        case 0x1ef4b8u: goto label_1ef4b8;
        case 0x1ef4bcu: goto label_1ef4bc;
        case 0x1ef4c0u: goto label_1ef4c0;
        case 0x1ef4c4u: goto label_1ef4c4;
        case 0x1ef4c8u: goto label_1ef4c8;
        case 0x1ef4ccu: goto label_1ef4cc;
        case 0x1ef4d0u: goto label_1ef4d0;
        case 0x1ef4d4u: goto label_1ef4d4;
        case 0x1ef4d8u: goto label_1ef4d8;
        case 0x1ef4dcu: goto label_1ef4dc;
        case 0x1ef4e0u: goto label_1ef4e0;
        case 0x1ef4e4u: goto label_1ef4e4;
        case 0x1ef4e8u: goto label_1ef4e8;
        case 0x1ef4ecu: goto label_1ef4ec;
        case 0x1ef4f0u: goto label_1ef4f0;
        case 0x1ef4f4u: goto label_1ef4f4;
        case 0x1ef4f8u: goto label_1ef4f8;
        case 0x1ef4fcu: goto label_1ef4fc;
        case 0x1ef500u: goto label_1ef500;
        case 0x1ef504u: goto label_1ef504;
        case 0x1ef508u: goto label_1ef508;
        case 0x1ef50cu: goto label_1ef50c;
        case 0x1ef510u: goto label_1ef510;
        case 0x1ef514u: goto label_1ef514;
        case 0x1ef518u: goto label_1ef518;
        case 0x1ef51cu: goto label_1ef51c;
        case 0x1ef520u: goto label_1ef520;
        case 0x1ef524u: goto label_1ef524;
        case 0x1ef528u: goto label_1ef528;
        case 0x1ef52cu: goto label_1ef52c;
        case 0x1ef530u: goto label_1ef530;
        case 0x1ef534u: goto label_1ef534;
        case 0x1ef538u: goto label_1ef538;
        case 0x1ef53cu: goto label_1ef53c;
        case 0x1ef540u: goto label_1ef540;
        case 0x1ef544u: goto label_1ef544;
        case 0x1ef548u: goto label_1ef548;
        case 0x1ef54cu: goto label_1ef54c;
        case 0x1ef550u: goto label_1ef550;
        case 0x1ef554u: goto label_1ef554;
        case 0x1ef558u: goto label_1ef558;
        case 0x1ef55cu: goto label_1ef55c;
        case 0x1ef560u: goto label_1ef560;
        case 0x1ef564u: goto label_1ef564;
        case 0x1ef568u: goto label_1ef568;
        case 0x1ef56cu: goto label_1ef56c;
        case 0x1ef570u: goto label_1ef570;
        case 0x1ef574u: goto label_1ef574;
        case 0x1ef578u: goto label_1ef578;
        case 0x1ef57cu: goto label_1ef57c;
        case 0x1ef580u: goto label_1ef580;
        case 0x1ef584u: goto label_1ef584;
        case 0x1ef588u: goto label_1ef588;
        case 0x1ef58cu: goto label_1ef58c;
        case 0x1ef590u: goto label_1ef590;
        case 0x1ef594u: goto label_1ef594;
        case 0x1ef598u: goto label_1ef598;
        case 0x1ef59cu: goto label_1ef59c;
        case 0x1ef5a0u: goto label_1ef5a0;
        case 0x1ef5a4u: goto label_1ef5a4;
        case 0x1ef5a8u: goto label_1ef5a8;
        case 0x1ef5acu: goto label_1ef5ac;
        case 0x1ef5b0u: goto label_1ef5b0;
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef5b8u: goto label_1ef5b8;
        case 0x1ef5bcu: goto label_1ef5bc;
        case 0x1ef5c0u: goto label_1ef5c0;
        case 0x1ef5c4u: goto label_1ef5c4;
        case 0x1ef5c8u: goto label_1ef5c8;
        case 0x1ef5ccu: goto label_1ef5cc;
        case 0x1ef5d0u: goto label_1ef5d0;
        default: break;
    }

    ctx->pc = 0x1ef460u;

label_1ef460:
    // 0x1ef460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ef460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ef464:
    // 0x1ef464: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ef468:
    // 0x1ef468: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ef468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ef46c:
    // 0x1ef46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ef470:
    // 0x1ef470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef474:
    // 0x1ef474: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ef474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef478:
    // 0x1ef478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ef47c:
    // 0x1ef47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ef480:
    // 0x1ef480: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ef480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ef484:
    // 0x1ef484: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1ef484u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ef488:
    // 0x1ef488: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ef488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ef48c:
    // 0x1ef48c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ef48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef490:
    // 0x1ef490: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x1ef490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_1ef494:
    // 0x1ef494: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ef494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1ef498:
    // 0x1ef498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ef498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ef49c:
    // 0x1ef49c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ef4a0:
    // 0x1ef4a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ef4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef4a4:
    // 0x1ef4a4: 0xc076ee0  jal         func_1DBB80
label_1ef4a8:
    if (ctx->pc == 0x1EF4A8u) {
        ctx->pc = 0x1EF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4A4u;
        // 0x1ef4a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF4ACu;
        goto label_1ef4ac;
    }
    ctx->pc = 0x1EF4A4u;
    SET_GPR_U32(ctx, 31, 0x1EF4ACu);
    ctx->pc = 0x1EF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4A4u;
    // 0x1ef4a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB80u, 0x1EF4A4u, 0x1EF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4ACu;
label_1ef4ac:
    // 0x1ef4ac: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1ef4acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1ef4b0:
    // 0x1ef4b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ef4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef4b4:
    // 0x1ef4b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ef4b8:
    // 0x1ef4b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ef4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef4bc:
    // 0x1ef4bc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1ef4c0:
    if (ctx->pc == 0x1EF4C0u) {
        ctx->pc = 0x1EF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4BCu;
        // 0x1ef4c0: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF4C4u;
        goto label_1ef4c4;
    }
    ctx->pc = 0x1EF4BCu;
    {
        const bool branch_taken_0x1ef4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4BCu;
        // 0x1ef4c0: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4bc) {
            ctx->pc = 0x1EF4F0u;
            goto label_1ef4f0;
        }
    }
    ctx->pc = 0x1EF4C4u;
label_1ef4c4:
    // 0x1ef4c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ef4c8:
    if (ctx->pc == 0x1EF4C8u) {
        ctx->pc = 0x1EF4CCu;
        goto label_1ef4cc;
    }
    ctx->pc = 0x1EF4C4u;
    {
        const bool branch_taken_0x1ef4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4c4) {
            ctx->pc = 0x1EF4E0u;
            goto label_1ef4e0;
        }
    }
    ctx->pc = 0x1EF4CCu;
label_1ef4cc:
    // 0x1ef4cc: 0x8c990040  lw          $t9, 0x40($a0)
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1ef4d0:
    // 0x1ef4d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ef4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ef4d4:
    // 0x1ef4d4: 0x320f809  jalr        $t9
label_1ef4d8:
    if (ctx->pc == 0x1EF4D8u) {
        ctx->pc = 0x1EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4D4u;
        // 0x1ef4d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF4DCu;
        goto label_1ef4dc;
    }
    ctx->pc = 0x1EF4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF4DCu);
        ctx->pc = 0x1EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4D4u;
        // 0x1ef4d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF4D4u, 0x1EF4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF4DCu;
label_1ef4dc:
    // 0x1ef4dc: 0x0  nop
    ctx->pc = 0x1ef4dcu;
    // NOP
label_1ef4e0:
    // 0x1ef4e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ef4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef4e4:
    // 0x1ef4e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ef4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ef4e8:
    // 0x1ef4e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ef4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ef4ec:
    // 0x1ef4ec: 0x0  nop
    ctx->pc = 0x1ef4ecu;
    // NOP
label_1ef4f0:
    // 0x1ef4f0: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1ef4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1ef4f4:
    // 0x1ef4f4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1ef4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1ef4f8:
    // 0x1ef4f8: 0xc096c88  jal         func_25B220
label_1ef4fc:
    if (ctx->pc == 0x1EF4FCu) {
        ctx->pc = 0x1EF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4F8u;
        // 0x1ef4fc: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF500u;
        goto label_1ef500;
    }
    ctx->pc = 0x1EF4F8u;
    SET_GPR_U32(ctx, 31, 0x1EF500u);
    ctx->pc = 0x1EF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4F8u;
    // 0x1ef4fc: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1EF4F8u, 0x1EF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF500u;
label_1ef500:
    // 0x1ef500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef504:
    // 0x1ef504: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ef508:
    if (ctx->pc == 0x1EF508u) {
        ctx->pc = 0x1EF50Cu;
        goto label_1ef50c;
    }
    ctx->pc = 0x1EF504u;
    {
        const bool branch_taken_0x1ef504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef504) {
            ctx->pc = 0x1EF518u;
            goto label_1ef518;
        }
    }
    ctx->pc = 0x1EF50Cu;
label_1ef50c:
    // 0x1ef50c: 0xc076cc0  jal         func_1DB300
label_1ef510:
    if (ctx->pc == 0x1EF510u) {
        ctx->pc = 0x1EF514u;
        goto label_1ef514;
    }
    ctx->pc = 0x1EF50Cu;
    SET_GPR_U32(ctx, 31, 0x1EF514u);
    ctx->pc = 0x1DB300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB300u, 0x1EF50Cu, 0x1EF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF514u;
label_1ef514:
    // 0x1ef514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef518:
    // 0x1ef518: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ef518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef51c:
    // 0x1ef51c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ef51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ef520:
    // 0x1ef520: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ef520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ef524:
    // 0x1ef524: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ef524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef528:
    // 0x1ef528: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ef528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ef52c:
    // 0x1ef52c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef530:
    // 0x1ef530: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1ef534:
    if (ctx->pc == 0x1EF534u) {
        ctx->pc = 0x1EF538u;
        goto label_1ef538;
    }
    ctx->pc = 0x1EF530u;
    {
        const bool branch_taken_0x1ef530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef530) {
            ctx->pc = 0x1EF5B8u;
            goto label_1ef5b8;
        }
    }
    ctx->pc = 0x1EF538u;
label_1ef538:
    // 0x1ef538: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1ef53c:
    // 0x1ef53c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1ef540:
    // 0x1ef540: 0x114c3c  dsll32      $t1, $s1, 16
    ctx->pc = 0x1ef540u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 16));
label_1ef544:
    // 0x1ef544: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x1ef544u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
label_1ef548:
    // 0x1ef548: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1ef548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1ef54c:
    // 0x1ef54c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1ef54cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_1ef550:
    // 0x1ef550: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1ef550u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_1ef554:
    // 0x1ef554: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ef554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef558:
    // 0x1ef558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef55c:
    // 0x1ef55c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef560:
    // 0x1ef560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ef564:
    // 0x1ef564: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ef564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ef568:
    // 0x1ef568: 0xc076ce0  jal         func_1DB380
label_1ef56c:
    if (ctx->pc == 0x1EF56Cu) {
        ctx->pc = 0x1EF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF568u;
        // 0x1ef56c: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF570u;
        goto label_1ef570;
    }
    ctx->pc = 0x1EF568u;
    SET_GPR_U32(ctx, 31, 0x1EF570u);
    ctx->pc = 0x1EF56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF568u;
    // 0x1ef56c: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB380u, 0x1EF568u, 0x1EF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF570u;
label_1ef570:
    // 0x1ef570: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1ef574:
    if (ctx->pc == 0x1EF574u) {
        ctx->pc = 0x1EF578u;
        goto label_1ef578;
    }
    ctx->pc = 0x1EF570u;
    {
        const bool branch_taken_0x1ef570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef570) {
            ctx->pc = 0x1EF5B8u;
            goto label_1ef5b8;
        }
    }
    ctx->pc = 0x1EF578u;
label_1ef578:
    // 0x1ef578: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef57c:
    // 0x1ef57c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ef57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ef580:
    // 0x1ef580: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef584:
    // 0x1ef584: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1ef588:
    if (ctx->pc == 0x1EF588u) {
        ctx->pc = 0x1EF58Cu;
        goto label_1ef58c;
    }
    ctx->pc = 0x1EF584u;
    {
        const bool branch_taken_0x1ef584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef584) {
            ctx->pc = 0x1EF5B8u;
            goto label_1ef5b8;
        }
    }
    ctx->pc = 0x1EF58Cu;
label_1ef58c:
    // 0x1ef58c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ef590:
    if (ctx->pc == 0x1EF590u) {
        ctx->pc = 0x1EF594u;
        goto label_1ef594;
    }
    ctx->pc = 0x1EF58Cu;
    {
        const bool branch_taken_0x1ef58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef58c) {
            ctx->pc = 0x1EF5A8u;
            goto label_1ef5a8;
        }
    }
    ctx->pc = 0x1EF594u;
label_1ef594:
    // 0x1ef594: 0x8c990040  lw          $t9, 0x40($a0)
    ctx->pc = 0x1ef594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1ef598:
    // 0x1ef598: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ef598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ef59c:
    // 0x1ef59c: 0x320f809  jalr        $t9
label_1ef5a0:
    if (ctx->pc == 0x1EF5A0u) {
        ctx->pc = 0x1EF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF59Cu;
        // 0x1ef5a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF5A4u;
        goto label_1ef5a4;
    }
    ctx->pc = 0x1EF59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF5A4u);
        ctx->pc = 0x1EF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF59Cu;
        // 0x1ef5a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF59Cu, 0x1EF5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF5A4u;
label_1ef5a4:
    // 0x1ef5a4: 0x0  nop
    ctx->pc = 0x1ef5a4u;
    // NOP
label_1ef5a8:
    // 0x1ef5a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef5ac:
    // 0x1ef5ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ef5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ef5b0:
    // 0x1ef5b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ef5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1ef5b4:
    // 0x1ef5b4: 0x0  nop
    ctx->pc = 0x1ef5b4u;
    // NOP
label_1ef5b8:
    // 0x1ef5b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ef5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef5bc:
    // 0x1ef5bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef5c0:
    // 0x1ef5c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef5c4:
    // 0x1ef5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef5c8:
    // 0x1ef5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef5cc:
    // 0x1ef5cc: 0x3e00008  jr          $ra
label_1ef5d0:
    if (ctx->pc == 0x1EF5D0u) {
        ctx->pc = 0x1EF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5CCu;
        // 0x1ef5d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF5D4u;
        goto label_fallthrough_0x1ef5cc;
    }
    ctx->pc = 0x1EF5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5CCu;
        // 0x1ef5d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ef5cc:
    ctx->pc = 0x1EF5D4u;
}
