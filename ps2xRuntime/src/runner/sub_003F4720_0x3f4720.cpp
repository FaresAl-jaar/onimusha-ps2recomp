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

// Function: sub_003F4720
// Address: 0x3f4720 - 0x3f4aec
void sub_003F4720_0x3f4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4720_0x3f4720");
#endif

    switch (ctx->pc) {
        case 0x3f478cu: goto label_3f478c;
        case 0x3f47b4u: goto label_3f47b4;
        case 0x3f4814u: goto label_3f4814;
        default: break;
    }

    ctx->pc = 0x3f4720u;

    // 0x3f4720: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3f4724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3f4724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3f4728: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3f4728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3f472c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3f4730: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3f4730u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4734: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3f4738: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3f4738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f473c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3f4740: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f4740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4744: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f4744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f4748: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f4748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f474c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f4750: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f4750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f4758: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3f4758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f475c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f4760: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4760u;
    {
        const bool branch_taken_0x3f4760 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4760u;
        // 0x3f4764: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4760) {
            ctx->pc = 0x3F4770u;
            goto label_3f4770;
        }
    }
    ctx->pc = 0x3F4768u;
    // 0x3f4768: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x3F4768u;
    {
        const bool branch_taken_0x3f4768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4768u;
        // 0x3f476c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4768) {
            ctx->pc = 0x3F4AC0u;
            goto label_3f4ac0;
        }
    }
    ctx->pc = 0x3F4770u;
label_3f4770:
    // 0x3f4770: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x3f4770u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x3f4774: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f4774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f477c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f477cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4780: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x3f4780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x3f4784: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3F4784u;
    SET_GPR_U32(ctx, 31, 0x3F478Cu);
    ctx->pc = 0x3F4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4784u;
    // 0x3f4788: 0x250846b0  addiu       $t0, $t0, 0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3F4784u, 0x3F478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F478Cu;
label_3f478c:
    // 0x3f478c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f478cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4790: 0x120000c9  beqz        $s0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3F4790u;
    {
        const bool branch_taken_0x3f4790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4790u;
        // 0x3f4794: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4790) {
            ctx->pc = 0x3F4AB8u;
            goto label_3f4ab8;
        }
    }
    ctx->pc = 0x3F4798u;
    // 0x3f4798: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3f4798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f479c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3f479cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47a0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x3f47a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47a8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3f47a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3f47ac: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3F47ACu;
    SET_GPR_U32(ctx, 31, 0x3F47B4u);
    ctx->pc = 0x3F47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47ACu;
    // 0x3f47b0: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3F47ACu, 0x3F47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47B4u;
label_3f47b4:
    // 0x3f47b4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3f47b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3f47b8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3f47b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3f47bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3f47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f47c0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3f47c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3f47c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f47c8: 0x24a55a32  addiu       $a1, $a1, 0x5A32
    ctx->pc = 0x3f47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23090));
    // 0x3f47cc: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x3f47ccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f47d0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3f47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3f47d4: 0xb49821  addu        $s3, $a1, $s4
    ctx->pc = 0x3f47d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3f47d8: 0x24845a34  addiu       $a0, $a0, 0x5A34
    ctx->pc = 0x3f47d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23092));
    // 0x3f47dc: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x3f47dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3f47e0: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x3f47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3f47e4: 0x24635a36  addiu       $v1, $v1, 0x5A36
    ctx->pc = 0x3f47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23094));
    // 0x3f47e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f47ec: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x3f47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3f47f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f47f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f47f4: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x3f47f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3f47f8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3f47f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f47fc: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3f47fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3f4800: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3f4800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f4804: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3f4804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f4808: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3f4808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f480c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3F480Cu;
    SET_GPR_U32(ctx, 31, 0x3F4814u);
    ctx->pc = 0x3F4810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F480Cu;
    // 0x3f4810: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3F480Cu, 0x3F4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4814u;
label_3f4814:
    // 0x3f4814: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3f4814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3f4818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f4818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3f481c: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x3f481cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x3f4820: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3f4820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3f4824: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x3f4824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x3f4828: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x3f4828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3f482c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3f482cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f4830: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f4830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f4834: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3f4834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3f4838: 0xa2030568  sb          $v1, 0x568($s0)
    ctx->pc = 0x3f4838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f483c: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x3f483cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x3f4840: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3f4840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3f4844: 0xae030518  sw          $v1, 0x518($s0)
    ctx->pc = 0x3f4844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 3));
    // 0x3f4848: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3f4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f484c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3f484cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3f4850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f4854: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3f4854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3f4858: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3f4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f485c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3f485cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3f4860: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4860u;
    {
        const bool branch_taken_0x3f4860 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4860u;
        // 0x3f4864: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4860) {
            ctx->pc = 0x3F4874u;
            goto label_3f4874;
        }
    }
    ctx->pc = 0x3F4868u;
    // 0x3f4868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f4868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f486c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F486Cu;
    {
        const bool branch_taken_0x3f486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F486Cu;
        // 0x3f4870: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f486c) {
            ctx->pc = 0x3F488Cu;
            goto label_3f488c;
        }
    }
    ctx->pc = 0x3F4874u;
label_3f4874:
    // 0x3f4874: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f4874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f4878: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f487c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f487cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4880: 0x0  nop
    ctx->pc = 0x3f4880u;
    // NOP
    // 0x3f4884: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f4884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3f4888: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3f4888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3f488c:
    // 0x3f488c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3f488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3f4890: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x3f4890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3f4894: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x3f4894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3f4898: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3f4898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x3f489c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f489cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f48a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3f48a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f48a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f48a8: 0x0  nop
    ctx->pc = 0x3f48a8u;
    // NOP
    // 0x3f48ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f48acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f48b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f48b4: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3f48b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3f48b8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3f48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3f48bc: 0x24425a38  addiu       $v0, $v0, 0x5A38
    ctx->pc = 0x3f48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23096));
    // 0x3f48c0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x3f48c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f48c4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3f48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3f48c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f48c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f48cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3f48ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f48d0: 0x0  nop
    ctx->pc = 0x3f48d0u;
    // NOP
    // 0x3f48d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f48d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3f48d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f48d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f48dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f48dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3f48e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f48e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3f48e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3f48e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3f48e8: 0x0  nop
    ctx->pc = 0x3f48e8u;
    // NOP
    // 0x3f48ec: 0xa6040526  sh          $a0, 0x526($s0)
    ctx->pc = 0x3f48ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f48f0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3f48f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f48f4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3f48f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3f48f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f48fc: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3f48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3f4900: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3f4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f4904: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3f4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f4908: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3f4908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3f490c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F490Cu;
    {
        const bool branch_taken_0x3f490c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3F4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F490Cu;
        // 0x3f4910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f490c) {
            ctx->pc = 0x3F4920u;
            goto label_3f4920;
        }
    }
    ctx->pc = 0x3F4914u;
    // 0x3f4914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f4914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4918u;
    {
        const bool branch_taken_0x3f4918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4918u;
        // 0x3f491c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4918) {
            ctx->pc = 0x3F4938u;
            goto label_3f4938;
        }
    }
    ctx->pc = 0x3F4920u;
label_3f4920:
    // 0x3f4920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f4920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f4924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f4928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f4928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f492c: 0x0  nop
    ctx->pc = 0x3f492cu;
    // NOP
    // 0x3f4930: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f4930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3f4934: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3f4934u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3f4938:
    // 0x3f4938: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3f4938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3f493c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f493cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3f4940: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3f4940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3f4944: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3f4944u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f4948: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3f4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3f494c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f494cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4950: 0x0  nop
    ctx->pc = 0x3f4950u;
    // NOP
    // 0x3f4954: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f4954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f4958: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x3f4958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3f495c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f4960: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3f4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3f4964: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3f4964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3f4968: 0x24425a3c  addiu       $v0, $v0, 0x5A3C
    ctx->pc = 0x3f4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23100));
    // 0x3f496c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f496cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f4970: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3f4970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3f4974: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f4974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4978: 0x0  nop
    ctx->pc = 0x3f4978u;
    // NOP
    // 0x3f497c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3f497cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3f4980: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f4980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3f4984: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3f4984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3f4988: 0xe600056c  swc1        $f0, 0x56C($s0)
    ctx->pc = 0x3f4988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1388), bits); }
    // 0x3f498c: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3f498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f4990: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3f4990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3f4994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f4998: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3f4998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3f499c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3f499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f49a0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3f49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f49a4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3f49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3f49a8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F49A8u;
    {
        const bool branch_taken_0x3f49a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3F49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F49A8u;
        // 0x3f49ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f49a8) {
            ctx->pc = 0x3F49BCu;
            goto label_3f49bc;
        }
    }
    ctx->pc = 0x3F49B0u;
    // 0x3f49b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f49b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f49b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F49B4u;
    {
        const bool branch_taken_0x3f49b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F49B4u;
        // 0x3f49b8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f49b4) {
            ctx->pc = 0x3F49D4u;
            goto label_3f49d4;
        }
    }
    ctx->pc = 0x3F49BCu;
label_3f49bc:
    // 0x3f49bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f49bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f49c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f49c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f49c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f49c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f49c8: 0x0  nop
    ctx->pc = 0x3f49c8u;
    // NOP
    // 0x3f49cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f49ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3f49d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3f49d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3f49d4:
    // 0x3f49d4: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3f49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3f49d8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3f49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3f49dc: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x3f49dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3f49e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f49e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f49e4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3f49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3f49e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f49e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f49ec: 0x0  nop
    ctx->pc = 0x3f49ecu;
    // NOP
    // 0x3f49f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f49f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f49f4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3f49f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3f49f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f49fc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3f49fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3f4a00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f4a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f4a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f4a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a08: 0x0  nop
    ctx->pc = 0x3f4a08u;
    // NOP
    // 0x3f4a0c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3f4a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3f4a10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f4a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3f4a14: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3f4a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3f4a18: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x3f4a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x3f4a1c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3f4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f4a20: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3f4a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3f4a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f4a28: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3f4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3f4a2c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3f4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3f4a30: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3f4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3f4a34: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F4A34u;
    {
        const bool branch_taken_0x3f4a34 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3F4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A34u;
        // 0x3f4a38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a34) {
            ctx->pc = 0x3F4A48u;
            goto label_3f4a48;
        }
    }
    ctx->pc = 0x3F4A3Cu;
    // 0x3f4a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f4a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4A40u;
    {
        const bool branch_taken_0x3f4a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4A40u;
        // 0x3f4a44: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a40) {
            ctx->pc = 0x3F4A60u;
            goto label_3f4a60;
        }
    }
    ctx->pc = 0x3F4A48u;
label_3f4a48:
    // 0x3f4a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f4a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f4a4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f4a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f4a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f4a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a54: 0x0  nop
    ctx->pc = 0x3f4a54u;
    // NOP
    // 0x3f4a58: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f4a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3f4a5c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3f4a5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3f4a60:
    // 0x3f4a60: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3f4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x3f4a64: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3f4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x3f4a68: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3f4a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3f4a6c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3f4a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3f4a70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3f4a70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f4a74: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3f4a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3f4a78: 0x3c023f4a  lui         $v0, 0x3F4A
    ctx->pc = 0x3f4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16202 << 16));
    // 0x3f4a7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f4a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f4a80: 0x34423d71  ori         $v0, $v0, 0x3D71
    ctx->pc = 0x3f4a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15729);
    // 0x3f4a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f4a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a88: 0x0  nop
    ctx->pc = 0x3f4a88u;
    // NOP
    // 0x3f4a8c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3f4a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3f4a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f4a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f4a94: 0x0  nop
    ctx->pc = 0x3f4a94u;
    // NOP
    // 0x3f4a98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f4a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3f4a9c: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x3f4a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x3f4aa0: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x3f4aa0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x3f4aa4: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x3f4aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x3f4aa8: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x3f4aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3f4aac: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3f4aacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3f4ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4AB0u;
    {
        const bool branch_taken_0x3f4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4AB0u;
        // 0x3f4ab4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ab0) {
            ctx->pc = 0x3F4AC0u;
            goto label_3f4ac0;
        }
    }
    ctx->pc = 0x3F4AB8u;
label_3f4ab8:
    // 0x3f4ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f4ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4abc: 0x0  nop
    ctx->pc = 0x3f4abcu;
    // NOP
label_3f4ac0:
    // 0x3f4ac0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3f4ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f4ac4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3f4ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f4ac8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f4ac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f4acc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f4accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f4ad0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f4ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f4ad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f4ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f4ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f4ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4AE4u;
        // 0x3f4ae8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4AECu;
}
