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

// Function: sub_002E6820
// Address: 0x2e6820 - 0x2e6968
void sub_002E6820_0x2e6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6820_0x2e6820");
#endif

    switch (ctx->pc) {
        case 0x2e686cu: goto label_2e686c;
        case 0x2e6894u: goto label_2e6894;
        case 0x2e68a8u: goto label_2e68a8;
        case 0x2e68dcu: goto label_2e68dc;
        case 0x2e6910u: goto label_2e6910;
        case 0x2e693cu: goto label_2e693c;
        default: break;
    }

    ctx->pc = 0x2e6820u;

    // 0x2e6820: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e6824: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2e6824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e6828: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e6828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e682c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2e682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2e6830: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e6834: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2e6834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2e6838: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e6838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e683c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e683cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e6840: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e6844: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e6844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e684c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e6850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6854: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e6854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e685c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2e685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2e6860: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2e6860u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6864: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E6864u;
    SET_GPR_U32(ctx, 31, 0x2E686Cu);
    ctx->pc = 0x2E6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6864u;
    // 0x2e6868: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E6864u, 0x2E686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E686Cu;
label_2e686c:
    // 0x2e686c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e686cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e6870: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2e6870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e6874: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2e6874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e6878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e687c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x2e687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2e6880: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e6884: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2e6884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2e6888: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2e6888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2e688c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E688Cu;
    SET_GPR_U32(ctx, 31, 0x2E6894u);
    ctx->pc = 0x2E6890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E688Cu;
    // 0x2e6890: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E688Cu, 0x2E6894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6894u;
label_2e6894:
    // 0x2e6894: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e6894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e6898: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e6898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e689c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2e689cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2e68a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e68a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68a4: 0x0  nop
    ctx->pc = 0x2e68a4u;
    // NOP
label_2e68a8:
    // 0x2e68a8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2e68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e68ac: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2e68acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2e68b0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2e68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2e68b4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x2e68b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2e68b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e68b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e68bc: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x2e68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x2e68c0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2e68c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e68c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e68c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e68c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e68c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e68cc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2e68ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2e68d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e68d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e68d4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E68D4u;
    SET_GPR_U32(ctx, 31, 0x2E68DCu);
    ctx->pc = 0x2E68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68D4u;
    // 0x2e68d8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E68D4u, 0x2E68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68DCu;
label_2e68dc:
    // 0x2e68dc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e68dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e68e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2e68e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e68e4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2e68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x2e68e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e68e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e68ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e68f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e68f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e68f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e68f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e68f8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2e68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e68fc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2e68fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2e6900: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2e6900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2e6904: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e6908: 0xc075420  jal         func_1D5080
    ctx->pc = 0x2E6908u;
    SET_GPR_U32(ctx, 31, 0x2E6910u);
    ctx->pc = 0x2E690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6908u;
    // 0x2e690c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5080u, 0x2E6908u, 0x2E6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6910u;
label_2e6910:
    // 0x2e6910: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e6910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e6914: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e6918: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x2e6918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e691c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2e691cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e6920: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E6920u;
    {
        const bool branch_taken_0x2e6920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6920u;
        // 0x2e6924: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6920) {
            ctx->pc = 0x2E68A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e68a8;
        }
    }
    ctx->pc = 0x2E6928u;
    // 0x2e6928: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2e6928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e692c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e6930: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2e6934: 0xc074a48  jal         func_1D2920
    ctx->pc = 0x2E6934u;
    SET_GPR_U32(ctx, 31, 0x2E693Cu);
    ctx->pc = 0x2E6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6934u;
    // 0x2e6938: 0x34450011  ori         $a1, $v0, 0x11 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2920u, 0x2E6934u, 0x2E693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E693Cu;
label_2e693c:
    // 0x2e693c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e693cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e6940: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e6940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6944: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e6944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6948: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e6948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e694c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e694cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e695c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e695cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6960: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6960u;
        // 0x2e6964: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6968u;
}
