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

// Function: sub_00281720
// Address: 0x281720 - 0x281888
void sub_00281720_0x281720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281720_0x281720");
#endif

    switch (ctx->pc) {
        case 0x281764u: goto label_281764;
        case 0x2817c8u: goto label_2817c8;
        case 0x2817e0u: goto label_2817e0;
        case 0x2817f4u: goto label_2817f4;
        default: break;
    }

    ctx->pc = 0x281720u;

    // 0x281720: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x281720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x281724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281728: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28172c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281738: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x281738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28173c: 0x8783815c  lh          $v1, -0x7EA4($gp)
    ctx->pc = 0x28173cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x281740: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x281740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x281744: 0x9382815e  lbu         $v0, -0x7EA2($gp)
    ctx->pc = 0x281744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934878)));
    // 0x281748: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x281748u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x28174c: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x28174cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x281750: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x281750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x281754: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x281758: 0x9045006c  lbu         $a1, 0x6C($v0)
    ctx->pc = 0x281758u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x28175c: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x28175Cu;
    SET_GPR_U32(ctx, 31, 0x281764u);
    ctx->pc = 0x281760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28175Cu;
    // 0x281760: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x28175Cu, 0x281764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281764u;
label_281764:
    // 0x281764: 0x92440821  lbu         $a0, 0x821($s2)
    ctx->pc = 0x281764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
    // 0x281768: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28176c: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x28176Cu;
    {
        const bool branch_taken_0x28176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x281770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28176Cu;
        // 0x281770: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28176c) {
            ctx->pc = 0x281850u;
            goto label_281850;
        }
    }
    ctx->pc = 0x281774u;
    // 0x281774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281778: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x281778u;
    {
        const bool branch_taken_0x281778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x281778) {
            ctx->pc = 0x281838u;
            goto label_281838;
        }
    }
    ctx->pc = 0x281780u;
    // 0x281780: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281780u;
    {
        const bool branch_taken_0x281780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281780) {
            ctx->pc = 0x281790u;
            goto label_281790;
        }
    }
    ctx->pc = 0x281788u;
    // 0x281788: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x281788u;
    {
        const bool branch_taken_0x281788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281788) {
            ctx->pc = 0x281870u;
            goto label_281870;
        }
    }
    ctx->pc = 0x281790u;
label_281790:
    // 0x281790: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x281790u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x281794: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x281794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x281798: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x281798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x28179c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28179cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2817a0: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x2817a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x2817a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2817a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2817a8: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x2817a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2817ac: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2817acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2817b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2817b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2817b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2817b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2817b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2817b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2817bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2817bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2817c0: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2817C0u;
    SET_GPR_U32(ctx, 31, 0x2817C8u);
    ctx->pc = 0x2817C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817C0u;
    // 0x2817c4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2817C0u, 0x2817C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817C8u;
label_2817c8:
    // 0x2817c8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2817c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2817cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2817ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2817d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2817d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2817d4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2817d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2817d8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2817D8u;
    SET_GPR_U32(ctx, 31, 0x2817E0u);
    ctx->pc = 0x2817DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817D8u;
    // 0x2817dc: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2817D8u, 0x2817E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817E0u;
label_2817e0:
    // 0x2817e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2817e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2817e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2817e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2817ec: 0xc0a9ae4  jal         func_2A6B90
    ctx->pc = 0x2817ECu;
    SET_GPR_U32(ctx, 31, 0x2817F4u);
    ctx->pc = 0x2817F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817ECu;
    // 0x2817f0: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B90u, 0x2817ECu, 0x2817F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817F4u;
label_2817f4:
    // 0x2817f4: 0x8e470148  lw          $a3, 0x148($s2)
    ctx->pc = 0x2817f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2817f8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2817f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2817fc: 0x24636438  addiu       $v1, $v1, 0x6438
    ctx->pc = 0x2817fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25656));
    // 0x281800: 0x3c058004  lui         $a1, 0x8004
    ctx->pc = 0x281800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32772 << 16));
    // 0x281804: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x281804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x281808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x281808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28180c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x281810: 0x34e70800  ori         $a3, $a3, 0x800
    ctx->pc = 0x281810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
    // 0x281814: 0xae470148  sw          $a3, 0x148($s2)
    ctx->pc = 0x281814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 7));
    // 0x281818: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x281818u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28181c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x28181cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281820: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x281820u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x281824: 0xa64607f2  sh          $a2, 0x7F2($s2)
    ctx->pc = 0x281824u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x281828: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x281828u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x28182c: 0xae4507ec  sw          $a1, 0x7EC($s2)
    ctx->pc = 0x28182cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 5));
    // 0x281830: 0xa2440821  sb          $a0, 0x821($s2)
    ctx->pc = 0x281830u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x281834: 0xa2430782  sb          $v1, 0x782($s2)
    ctx->pc = 0x281834u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 3));
label_281838:
    // 0x281838: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x281838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28183c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x28183Cu;
    {
        const bool branch_taken_0x28183c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x281840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28183Cu;
        // 0x281840: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28183c) {
            ctx->pc = 0x281870u;
            goto label_281870;
        }
    }
    ctx->pc = 0x281844u;
    // 0x281844: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x281844u;
    {
        const bool branch_taken_0x281844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281844u;
        // 0x281848: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281844) {
            ctx->pc = 0x281870u;
            goto label_281870;
        }
    }
    ctx->pc = 0x28184Cu;
    // 0x28184c: 0x0  nop
    ctx->pc = 0x28184cu;
    // NOP
label_281850:
    // 0x281850: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x281850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x281854: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x281854u;
    {
        const bool branch_taken_0x281854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281854u;
        // 0x281858: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281854) {
            ctx->pc = 0x281870u;
            goto label_281870;
        }
    }
    ctx->pc = 0x28185Cu;
    // 0x28185c: 0x24636440  addiu       $v1, $v1, 0x6440
    ctx->pc = 0x28185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25664));
    // 0x281860: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x281860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x281864: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x281864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281868: 0xa2430780  sb          $v1, 0x780($s2)
    ctx->pc = 0x281868u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x28186c: 0x0  nop
    ctx->pc = 0x28186cu;
    // NOP
label_281870:
    // 0x281870: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x281870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28187c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281880: 0x3e00008  jr          $ra
    ctx->pc = 0x281880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281880u;
        // 0x281884: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281888u;
}
