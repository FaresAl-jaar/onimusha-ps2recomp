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

// Function: sub_003B0510
// Address: 0x3b0510 - 0x3b066c
void sub_003B0510_0x3b0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0510_0x3b0510");
#endif

    switch (ctx->pc) {
        case 0x3b0560u: goto label_3b0560;
        case 0x3b0588u: goto label_3b0588;
        case 0x3b05e8u: goto label_3b05e8;
        default: break;
    }

    ctx->pc = 0x3b0510u;

    // 0x3b0510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b0514: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3b0514u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3b0518: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b0518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b051c: 0x250804a0  addiu       $t0, $t0, 0x4A0
    ctx->pc = 0x3b051cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1184));
    // 0x3b0520: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b0520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b0524: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b0524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b0528: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b0528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b052c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b0530: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b0530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0534: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b0534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b0538: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b0538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b053c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b0540: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3b0540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b0544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b0548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b0548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b054c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3b054cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b0554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0558: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3B0558u;
    SET_GPR_U32(ctx, 31, 0x3B0560u);
    ctx->pc = 0x3B055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0558u;
    // 0x3b055c: 0x24070570  addiu       $a3, $zero, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3B0558u, 0x3B0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0560u;
label_3b0560:
    // 0x3b0560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0564: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B0564u;
    {
        const bool branch_taken_0x3b0564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0564u;
        // 0x3b0568: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0564) {
            ctx->pc = 0x3B0640u;
            goto label_3b0640;
        }
    }
    ctx->pc = 0x3B056Cu;
    // 0x3b056c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b056cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0570: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b0570u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0574: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x3b0574u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b057c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3b057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3b0580: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3B0580u;
    SET_GPR_U32(ctx, 31, 0x3B0588u);
    ctx->pc = 0x3B0584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0580u;
    // 0x3b0584: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3B0580u, 0x3B0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0588u;
label_3b0588:
    // 0x3b0588: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3b0588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3b058c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b058cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b0590: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3b0590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b0594: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3b0594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3b0598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b059c: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x3b059cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x3b05a0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3b05a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b05a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3b05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3b05a8: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x3b05a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3b05ac: 0x24842a92  addiu       $a0, $a0, 0x2A92
    ctx->pc = 0x3b05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10898));
    // 0x3b05b0: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x3b05b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b05b4: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x3b05b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3b05b8: 0x24632a94  addiu       $v1, $v1, 0x2A94
    ctx->pc = 0x3b05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10900));
    // 0x3b05bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b05c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3b05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3b05c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b05c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b05c8: 0xa6260526  sh          $a2, 0x526($s1)
    ctx->pc = 0x3b05c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b05cc: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3b05ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b05d0: 0xa6250528  sh          $a1, 0x528($s1)
    ctx->pc = 0x3b05d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b05d4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3b05d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b05d8: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x3b05d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b05dc: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x3b05dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b05e0: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3B05E0u;
    SET_GPR_U32(ctx, 31, 0x3B05E8u);
    ctx->pc = 0x3B05E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B05E0u;
    // 0x3b05e4: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3B05E0u, 0x3B05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B05E8u;
label_3b05e8:
    // 0x3b05e8: 0xae200550  sw          $zero, 0x550($s1)
    ctx->pc = 0x3b05e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
    // 0x3b05ec: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b05f0: 0x24422aa0  addiu       $v0, $v0, 0x2AA0
    ctx->pc = 0x3b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10912));
    // 0x3b05f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b05f8: 0xae200554  sw          $zero, 0x554($s1)
    ctx->pc = 0x3b05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 0));
    // 0x3b05fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3b0600: 0xae230558  sw          $v1, 0x558($s1)
    ctx->pc = 0x3b0600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 3));
    // 0x3b0604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b0604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b0608: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b0608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b060c: 0xa2240560  sb          $a0, 0x560($s1)
    ctx->pc = 0x3b060cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1376), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b0610: 0x24422a9c  addiu       $v0, $v0, 0x2A9C
    ctx->pc = 0x3b0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10908));
    // 0x3b0614: 0xa2320561  sb          $s2, 0x561($s1)
    ctx->pc = 0x3b0614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1377), (uint8_t)GPR_U32(ctx, 18));
    // 0x3b0618: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3b0618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3b061c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3b061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0620: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x3b0620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x3b0624: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3b0624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3b0628: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x3b0628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x3b062c: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x3b062cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x3b0630: 0xa2200562  sb          $zero, 0x562($s1)
    ctx->pc = 0x3b0630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1378), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0634u;
    {
        const bool branch_taken_0x3b0634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0634u;
        // 0x3b0638: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0634) {
            ctx->pc = 0x3B0648u;
            goto label_3b0648;
        }
    }
    ctx->pc = 0x3B063Cu;
    // 0x3b063c: 0x0  nop
    ctx->pc = 0x3b063cu;
    // NOP
label_3b0640:
    // 0x3b0640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0644: 0x0  nop
    ctx->pc = 0x3b0644u;
    // NOP
label_3b0648:
    // 0x3b0648: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b064c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b064cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b0650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b0654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b0654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b0658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b065c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b065cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b0660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0664: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0664u;
        // 0x3b0668: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B066Cu;
}
