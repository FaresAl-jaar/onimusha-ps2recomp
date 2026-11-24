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

// Function: sub_001C3FF0
// Address: 0x1c3ff0 - 0x1c420c
void sub_001C3FF0_0x1c3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3FF0_0x1c3ff0");
#endif

    switch (ctx->pc) {
        case 0x1c408cu: goto label_1c408c;
        case 0x1c40a0u: goto label_1c40a0;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c4120u: goto label_1c4120;
        case 0x1c4150u: goto label_1c4150;
        case 0x1c416cu: goto label_1c416c;
        case 0x1c4188u: goto label_1c4188;
        default: break;
    }

    ctx->pc = 0x1c3ff0u;

    // 0x1c3ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c3ff4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c3ff8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c3ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c3ffc: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x1c3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x1c4000: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c4000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c4004: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c4008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c400c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x1c400cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1c4010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c4014: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c4014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c401c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1c401cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c4020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4024: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c4024u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c402c: 0x24c68120  addiu       $a2, $a2, -0x7EE0
    ctx->pc = 0x1c402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934816));
    // 0x1c4030: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c4034: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1c4034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c4038: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x1c4038u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c403c: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1c403cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4040: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1c4040u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4044: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4048: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1c404c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1c404cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4050: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1c4050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c4054: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c4054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c4058: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1c405c: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c405cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c4060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c4060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4064: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4068: 0x24a58150  addiu       $a1, $a1, -0x7EB0
    ctx->pc = 0x1c4068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934864));
    // 0x1c406c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1c406cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1c4070: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1c4070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c4074: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1c4074u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1c4078: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x1c4078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c407c: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x1c407cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x1c4080: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x1c4080u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1c4084: 0xc041728  jal         func_105CA0
    ctx->pc = 0x1C4084u;
    SET_GPR_U32(ctx, 31, 0x1C408Cu);
    ctx->pc = 0x1C4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4084u;
    // 0x1c4088: 0x7cc30030  sq          $v1, 0x30($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x1C4084u, 0x1C408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C408Cu;
label_1c408c:
    // 0x1c408c: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1c4090: 0x24848150  addiu       $a0, $a0, -0x7EB0
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934864));
    // 0x1c4094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4098: 0xc041728  jal         func_105CA0
    ctx->pc = 0x1C4098u;
    SET_GPR_U32(ctx, 31, 0x1C40A0u);
    ctx->pc = 0x1C409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4098u;
    // 0x1c409c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x1C4098u, 0x1C40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40A0u;
label_1c40a0:
    // 0x1c40a0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c40a4: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c40a8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c40ac: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x1c40b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c40b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c40b4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c40b8: 0x24c68120  addiu       $a2, $a2, -0x7EE0
    ctx->pc = 0x1c40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934816));
    // 0x1c40bc: 0xc06867c  jal         func_1A19F0
    ctx->pc = 0x1C40BCu;
    SET_GPR_U32(ctx, 31, 0x1C40C4u);
    ctx->pc = 0x1C40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40BCu;
    // 0x1c40c0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19F0u, 0x1C40BCu, 0x1C40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40C4u;
label_1c40c4:
    // 0x1c40c4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c40c8: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c40cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c40d0: 0x3c070086  lui         $a3, 0x86
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)134 << 16));
    // 0x1c40d4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1c40d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c40d8: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1c40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1c40dc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c40e0: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c40e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c40e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c40e8: 0x24e78120  addiu       $a3, $a3, -0x7EE0
    ctx->pc = 0x1c40e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934816));
    // 0x1c40ec: 0x24848150  addiu       $a0, $a0, -0x7EB0
    ctx->pc = 0x1c40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934864));
    // 0x1c40f0: 0x24a58150  addiu       $a1, $a1, -0x7EB0
    ctx->pc = 0x1c40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934864));
    // 0x1c40f4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c40f8: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1c40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1c40fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c40fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4100: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1c4100u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1c4104: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1c4104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c4108: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1c4108u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1c410c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1c410cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c4110: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x1c4110u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x1c4114: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1c4114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c4118: 0xc041728  jal         func_105CA0
    ctx->pc = 0x1C4118u;
    SET_GPR_U32(ctx, 31, 0x1C4120u);
    ctx->pc = 0x1C411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4118u;
    // 0x1c411c: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x1C4118u, 0x1C4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4120u;
label_1c4120:
    // 0x1c4120: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c4120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4124: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1c4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1c4128: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x1c4128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x1c412c: 0x24638150  addiu       $v1, $v1, -0x7EB0
    ctx->pc = 0x1c412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934864));
    // 0x1c4130: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1c4130u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x858150u));
    // 0x1c4134: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c4134u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1c4138: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x1c4138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c413c: 0x8e510078  lw          $s1, 0x78($s2)
    ctx->pc = 0x1c413cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1c4140: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x1c4140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c4144: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4144u;
    {
        const bool branch_taken_0x1c4144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4144u;
        // 0x1c4148: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4144) {
            ctx->pc = 0x1C4190u;
            goto label_1c4190;
        }
    }
    ctx->pc = 0x1C414Cu;
    // 0x1c414c: 0x0  nop
    ctx->pc = 0x1c414cu;
    // NOP
label_1c4150:
    // 0x1c4150: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1c4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c4154: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1c4154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c4158: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c415c: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1c415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c4160: 0x24a58120  addiu       $a1, $a1, -0x7EE0
    ctx->pc = 0x1c4160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1c4164: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4164u;
    SET_GPR_U32(ctx, 31, 0x1C416Cu);
    ctx->pc = 0x1C4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4164u;
    // 0x1c4168: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4164u, 0x1C416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C416Cu;
label_1c416c:
    // 0x1c416c: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x1c416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1c4170: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1c4170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c4174: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c4174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c4178: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1c4178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c417c: 0x24a58120  addiu       $a1, $a1, -0x7EE0
    ctx->pc = 0x1c417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1c4180: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4180u;
    SET_GPR_U32(ctx, 31, 0x1C4188u);
    ctx->pc = 0x1C4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4180u;
    // 0x1c4184: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4180u, 0x1C4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4188u;
label_1c4188:
    // 0x1c4188: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c4188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c418c: 0x0  nop
    ctx->pc = 0x1c418cu;
    // NOP
label_1c4190:
    // 0x1c4190: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x1c4190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c4194: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C4194u;
    {
        const bool branch_taken_0x1c4194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4194u;
        // 0x1c4198: 0x141900  sll         $v1, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4194) {
            ctx->pc = 0x1C4150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4150;
        }
    }
    ctx->pc = 0x1C419Cu;
    // 0x1c419c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c419cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41a0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c41a4: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1c41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c41a8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c41ac: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x1c41acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1c41b0: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x1c41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c41b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c41b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41b8: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x1c41b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c41bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1c41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c41c0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c41c4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c41c8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c41cc: 0x24a30070  addiu       $v1, $a1, 0x70
    ctx->pc = 0x1c41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x1c41d0: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x1c41d4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1c41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c41d8: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x1c41d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c41dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c41e0: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1c41e4: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1c41e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1c41e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c41e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c41ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c41ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c41f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c41f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c41f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c41f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c41f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c41f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c41fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c41fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4204: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4204u;
        // 0x1c4208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C420Cu;
}
