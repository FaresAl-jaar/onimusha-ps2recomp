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

// Function: sub_001F0490
// Address: 0x1f0490 - 0x1f058c
void sub_001F0490_0x1f0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0490_0x1f0490");
#endif

    switch (ctx->pc) {
        case 0x1f0490u: goto label_1f0490;
        case 0x1f0494u: goto label_1f0494;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f049cu: goto label_1f049c;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04a8u: goto label_1f04a8;
        case 0x1f04acu: goto label_1f04ac;
        case 0x1f04b0u: goto label_1f04b0;
        case 0x1f04b4u: goto label_1f04b4;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f04bcu: goto label_1f04bc;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04c4u: goto label_1f04c4;
        case 0x1f04c8u: goto label_1f04c8;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d0u: goto label_1f04d0;
        case 0x1f04d4u: goto label_1f04d4;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f04dcu: goto label_1f04dc;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f04e4u: goto label_1f04e4;
        case 0x1f04e8u: goto label_1f04e8;
        case 0x1f04ecu: goto label_1f04ec;
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f04f4u: goto label_1f04f4;
        case 0x1f04f8u: goto label_1f04f8;
        case 0x1f04fcu: goto label_1f04fc;
        case 0x1f0500u: goto label_1f0500;
        case 0x1f0504u: goto label_1f0504;
        case 0x1f0508u: goto label_1f0508;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0510u: goto label_1f0510;
        case 0x1f0514u: goto label_1f0514;
        case 0x1f0518u: goto label_1f0518;
        case 0x1f051cu: goto label_1f051c;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0524u: goto label_1f0524;
        case 0x1f0528u: goto label_1f0528;
        case 0x1f052cu: goto label_1f052c;
        case 0x1f0530u: goto label_1f0530;
        case 0x1f0534u: goto label_1f0534;
        case 0x1f0538u: goto label_1f0538;
        case 0x1f053cu: goto label_1f053c;
        case 0x1f0540u: goto label_1f0540;
        case 0x1f0544u: goto label_1f0544;
        case 0x1f0548u: goto label_1f0548;
        case 0x1f054cu: goto label_1f054c;
        case 0x1f0550u: goto label_1f0550;
        case 0x1f0554u: goto label_1f0554;
        case 0x1f0558u: goto label_1f0558;
        case 0x1f055cu: goto label_1f055c;
        case 0x1f0560u: goto label_1f0560;
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0568u: goto label_1f0568;
        case 0x1f056cu: goto label_1f056c;
        case 0x1f0570u: goto label_1f0570;
        case 0x1f0574u: goto label_1f0574;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f057cu: goto label_1f057c;
        case 0x1f0580u: goto label_1f0580;
        case 0x1f0584u: goto label_1f0584;
        case 0x1f0588u: goto label_1f0588;
        default: break;
    }

    ctx->pc = 0x1f0490u;

label_1f0490:
    // 0x1f0490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f0494:
    // 0x1f0494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f0498:
    // 0x1f0498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f0498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f049c:
    // 0x1f049c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f04a0:
    // 0x1f04a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f04a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f04a4:
    // 0x1f04a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f04a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f04a8:
    // 0x1f04a8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1f04ac:
    // 0x1f04ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1f04acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f04b0:
    // 0x1f04b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f04b4:
    // 0x1f04b4: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x1f04b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1f04b8:
    // 0x1f04b8: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_1f04bc:
    if (ctx->pc == 0x1F04BCu) {
        ctx->pc = 0x1F04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B8u;
        // 0x1f04bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04C0u;
        goto label_1f04c0;
    }
    ctx->pc = 0x1F04B8u;
    {
        const bool branch_taken_0x1f04b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B8u;
        // 0x1f04bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04b8) {
            ctx->pc = 0x1F0570u;
            goto label_1f0570;
        }
    }
    ctx->pc = 0x1F04C0u;
label_1f04c0:
    // 0x1f04c0: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x1f04c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1f04c4:
    // 0x1f04c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f04c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f04c8:
    // 0x1f04c8: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_1f04cc:
    if (ctx->pc == 0x1F04CCu) {
        ctx->pc = 0x1F04D0u;
        goto label_1f04d0;
    }
    ctx->pc = 0x1F04C8u;
    {
        const bool branch_taken_0x1f04c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f04c8) {
            ctx->pc = 0x1F0570u;
            goto label_1f0570;
        }
    }
    ctx->pc = 0x1F04D0u;
label_1f04d0:
    // 0x1f04d0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1f04d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1f04d4:
    // 0x1f04d4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1f04d8:
    // 0x1f04d8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_1f04dc:
    if (ctx->pc == 0x1F04DCu) {
        ctx->pc = 0x1F04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04D8u;
        // 0x1f04dc: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04E0u;
        goto label_1f04e0;
    }
    ctx->pc = 0x1F04D8u;
    {
        const bool branch_taken_0x1f04d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04D8u;
        // 0x1f04dc: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04d8) {
            ctx->pc = 0x1F0570u;
            goto label_1f0570;
        }
    }
    ctx->pc = 0x1F04E0u;
label_1f04e0:
    // 0x1f04e0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_1f04e4:
    if (ctx->pc == 0x1F04E4u) {
        ctx->pc = 0x1F04E8u;
        goto label_1f04e8;
    }
    ctx->pc = 0x1F04E0u;
    {
        const bool branch_taken_0x1f04e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f04e0) {
            ctx->pc = 0x1F0570u;
            goto label_1f0570;
        }
    }
    ctx->pc = 0x1F04E8u;
label_1f04e8:
    // 0x1f04e8: 0x8cb20050  lw          $s2, 0x50($a1)
    ctx->pc = 0x1f04e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_1f04ec:
    // 0x1f04ec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1f04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1f04f0:
    // 0x1f04f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f04f4:
    // 0x1f04f4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1f04f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1f04f8:
    // 0x1f04f8: 0x94480580  lhu         $t0, 0x580($v0)
    ctx->pc = 0x1f04f8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1408)));
label_1f04fc:
    // 0x1f04fc: 0x24510580  addiu       $s1, $v0, 0x580
    ctx->pc = 0x1f04fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_1f0500:
    // 0x1f0500: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f0500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f0504:
    // 0x1f0504: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1f0504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1f0508:
    // 0x1f0508: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f0508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f050c:
    // 0x1f050c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f050cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0510:
    // 0x1f0510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0514:
    // 0x1f0514: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1f0514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1f0518:
    // 0x1f0518: 0x90470680  lbu         $a3, 0x680($v0)
    ctx->pc = 0x1f0518u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1664)));
label_1f051c:
    // 0x1f051c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f051cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f0520:
    // 0x1f0520: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x1f0520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1f0524:
    // 0x1f0524: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1f0524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1f0528:
    // 0x1f0528: 0x320f809  jalr        $t9
label_1f052c:
    if (ctx->pc == 0x1F052Cu) {
        ctx->pc = 0x1F052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0528u;
        // 0x1f052c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0530u;
        goto label_1f0530;
    }
    ctx->pc = 0x1F0528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0530u);
        ctx->pc = 0x1F052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0528u;
        // 0x1f052c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0528u, 0x1F0530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0530u;
label_1f0530:
    // 0x1f0530: 0x924400ce  lbu         $a0, 0xCE($s2)
    ctx->pc = 0x1f0530u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 206)));
label_1f0534:
    // 0x1f0534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0538:
    // 0x1f0538: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_1f053c:
    if (ctx->pc == 0x1F053Cu) {
        ctx->pc = 0x1F0540u;
        goto label_1f0540;
    }
    ctx->pc = 0x1F0538u;
    {
        const bool branch_taken_0x1f0538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f0538) {
            ctx->pc = 0x1F0570u;
            goto label_1f0570;
        }
    }
    ctx->pc = 0x1F0540u;
label_1f0540:
    // 0x1f0540: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1f0540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1f0544:
    // 0x1f0544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0548:
    // 0x1f0548: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f0548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f054c:
    // 0x1f054c: 0x94450480  lhu         $a1, 0x480($v0)
    ctx->pc = 0x1f054cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1152)));
label_1f0550:
    // 0x1f0550: 0xc061bd8  jal         func_186F60
label_1f0554:
    if (ctx->pc == 0x1F0554u) {
        ctx->pc = 0x1F0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0550u;
        // 0x1f0554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0558u;
        goto label_1f0558;
    }
    ctx->pc = 0x1F0550u;
    SET_GPR_U32(ctx, 31, 0x1F0558u);
    ctx->pc = 0x1F0554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0550u;
    // 0x1f0554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F60u, 0x1F0550u, 0x1F0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0558u;
label_1f0558:
    // 0x1f0558: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1f0558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1f055c:
    // 0x1f055c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f055cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f0560:
    // 0x1f0560: 0x0  nop
    ctx->pc = 0x1f0560u;
    // NOP
label_1f0564:
    // 0x1f0564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f0568:
    // 0x1f0568: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x1f0568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_1f056c:
    // 0x1f056c: 0x0  nop
    ctx->pc = 0x1f056cu;
    // NOP
label_1f0570:
    // 0x1f0570: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f0570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0574:
    // 0x1f0574: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f0574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0578:
    // 0x1f0578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f057c:
    // 0x1f057c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f057cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0580:
    // 0x1f0580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0584:
    // 0x1f0584: 0x3e00008  jr          $ra
label_1f0588:
    if (ctx->pc == 0x1F0588u) {
        ctx->pc = 0x1F0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0584u;
        // 0x1f0588: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F058Cu;
        goto label_fallthrough_0x1f0584;
    }
    ctx->pc = 0x1F0584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0584u;
        // 0x1f0588: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f0584:
    ctx->pc = 0x1F058Cu;
}
