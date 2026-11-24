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

// Function: sub_0032E760
// Address: 0x32e760 - 0x32e8dc
void sub_0032E760_0x32e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E760_0x32e760");
#endif

    switch (ctx->pc) {
        case 0x32e7d0u: goto label_32e7d0;
        case 0x32e7f8u: goto label_32e7f8;
        case 0x32e82cu: goto label_32e82c;
        case 0x32e840u: goto label_32e840;
        case 0x32e860u: goto label_32e860;
        default: break;
    }

    ctx->pc = 0x32e760u;

    // 0x32e760: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32e764: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x32e764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x32e768: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32e768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x32e76c: 0x24632540  addiu       $v1, $v1, 0x2540
    ctx->pc = 0x32e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9536));
    // 0x32e770: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32e774: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32e778: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32e77c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32e77cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32e784: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x32e784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32e78c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32e78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32e790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32e794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e79c: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x32e79cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x32e7a0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x32e7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e7a4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x32e7a4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x32e7a8: 0x8088000e  lb          $t0, 0xE($a0)
    ctx->pc = 0x32e7a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x32e7ac: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x32e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x32e7b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e7b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e7b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e7b8: 0x24a59884  addiu       $a1, $a1, -0x677C
    ctx->pc = 0x32e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940804));
    // 0x32e7bc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e7bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e7c0: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x32e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x32e7c4: 0x90540000  lbu         $s4, 0x0($v0)
    ctx->pc = 0x32e7c4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e7c8: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E7C8u;
    SET_GPR_U32(ctx, 31, 0x32E7D0u);
    ctx->pc = 0x32E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7C8u;
    // 0x32e7cc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E7C8u, 0x32E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7D0u;
label_32e7d0:
    // 0x32e7d0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x32E7D0u;
    {
        const bool branch_taken_0x32e7d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7D0u;
        // 0x32e7d4: 0x26220098  addiu       $v0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7d0) {
            ctx->pc = 0x32E808u;
            goto label_32e808;
        }
    }
    ctx->pc = 0x32E7D8u;
    // 0x32e7d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e7dc: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e7e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e7e4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e7e4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e7e8: 0x24a59898  addiu       $a1, $a1, -0x6768
    ctx->pc = 0x32e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940824));
    // 0x32e7ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32e7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e7f0: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E7F0u;
    SET_GPR_U32(ctx, 31, 0x32E7F8u);
    ctx->pc = 0x32E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7F0u;
    // 0x32e7f4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E7F0u, 0x32E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7F8u;
label_32e7f8:
    // 0x32e7f8: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x32e7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32e7fc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x32e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32e800: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x32E800u;
    {
        const bool branch_taken_0x32e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E800u;
        // 0x32e804: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e800) {
            ctx->pc = 0x32E880u;
            goto label_32e880;
        }
    }
    ctx->pc = 0x32E808u;
label_32e808:
    // 0x32e808: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x32e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x32e80c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e80cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e810: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e814: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e814u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e818: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32e818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e81c: 0x24a59898  addiu       $a1, $a1, -0x6768
    ctx->pc = 0x32e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940824));
    // 0x32e820: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32e820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e824: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E824u;
    SET_GPR_U32(ctx, 31, 0x32E82Cu);
    ctx->pc = 0x32E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E824u;
    // 0x32e828: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E824u, 0x32E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E82Cu;
label_32e82c:
    // 0x32e82c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x32e82cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32e830: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x32e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32e834: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32E834u;
    {
        const bool branch_taken_0x32e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E834u;
        // 0x32e838: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e834) {
            ctx->pc = 0x32E880u;
            goto label_32e880;
        }
    }
    ctx->pc = 0x32E83Cu;
    // 0x32e83c: 0x0  nop
    ctx->pc = 0x32e83cu;
    // NOP
label_32e840:
    // 0x32e840: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x32e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x32e844: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e848: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e84c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e84cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e850: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x32e850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e854: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32e854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e858: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E858u;
    SET_GPR_U32(ctx, 31, 0x32E860u);
    ctx->pc = 0x32E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E858u;
    // 0x32e85c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E858u, 0x32E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E860u;
label_32e860:
    // 0x32e860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32e860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e864: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x32e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x32e868: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x32e868u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x32e86c: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x32e86cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32e870: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x32E870u;
    {
        const bool branch_taken_0x32e870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E870u;
        // 0x32e874: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e870) {
            ctx->pc = 0x32E840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e840;
        }
    }
    ctx->pc = 0x32E878u;
    // 0x32e878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32E878u;
    {
        const bool branch_taken_0x32e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e878) {
            ctx->pc = 0x32E8B0u;
            goto label_32e8b0;
        }
    }
    ctx->pc = 0x32E880u;
label_32e880:
    // 0x32e880: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x32e880u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32e884: 0x132c3c  dsll32      $a1, $s3, 16
    ctx->pc = 0x32e884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
    // 0x32e888: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32e88c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x32e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e890: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x32e890u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x32e894: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32e894u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32e898: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32e898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32e89c: 0xb09018  mult        $s2, $a1, $s0
    ctx->pc = 0x32e89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x32e8a0: 0x24639870  addiu       $v1, $v1, -0x6790
    ctx->pc = 0x32e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940784));
    // 0x32e8a4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x32e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32e8a8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x32E8A8u;
    {
        const bool branch_taken_0x32e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8A8u;
        // 0x32e8ac: 0x64b821  addu        $s7, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e8a8) {
            ctx->pc = 0x32E860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e860;
        }
    }
    ctx->pc = 0x32E8B0u;
label_32e8b0:
    // 0x32e8b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32e8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32e8b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32e8b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e8b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32e8b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e8bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32e8bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e8c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e8c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e8c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e8c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e8c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e8cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e8d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8D4u;
        // 0x32e8d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E8DCu;
}
