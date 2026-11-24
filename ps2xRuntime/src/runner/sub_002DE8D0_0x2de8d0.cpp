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

// Function: sub_002DE8D0
// Address: 0x2de8d0 - 0x2deaa4
void sub_002DE8D0_0x2de8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE8D0_0x2de8d0");
#endif

    switch (ctx->pc) {
        case 0x2de908u: goto label_2de908;
        case 0x2de940u: goto label_2de940;
        case 0x2de950u: goto label_2de950;
        case 0x2de988u: goto label_2de988;
        case 0x2de998u: goto label_2de998;
        case 0x2de9e4u: goto label_2de9e4;
        case 0x2de9f8u: goto label_2de9f8;
        case 0x2dea44u: goto label_2dea44;
        case 0x2dea58u: goto label_2dea58;
        case 0x2dea90u: goto label_2dea90;
        default: break;
    }

    ctx->pc = 0x2de8d0u;

    // 0x2de8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de8e4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2de8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2de8e8: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x2de8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2de8ec: 0x908300c6  lbu         $v1, 0xC6($a0)
    ctx->pc = 0x2de8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x2de8f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de8f4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2de8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2de8f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2de8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2de8fc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2de8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2de900: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x2DE900u;
    SET_GPR_U32(ctx, 31, 0x2DE908u);
    ctx->pc = 0x2DE904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE900u;
    // 0x2de904: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2DE900u, 0x2DE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE908u;
label_2de908:
    // 0x2de908: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x2de908u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2de90c: 0x7e2300b0  sq          $v1, 0xB0($s1)
    ctx->pc = 0x2de90cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 3));
    // 0x2de910: 0x8e2800cc  lw          $t0, 0xCC($s1)
    ctx->pc = 0x2de910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2de914: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DE914u;
    {
        const bool branch_taken_0x2de914 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de914) {
            ctx->pc = 0x2DE958u;
            goto label_2de958;
        }
    }
    ctx->pc = 0x2DE91Cu;
    // 0x2de91c: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2de91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2de920: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2de920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2de924: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE924u;
    {
        const bool branch_taken_0x2de924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de924) {
            ctx->pc = 0x2DE940u;
            goto label_2de940;
        }
    }
    ctx->pc = 0x2DE92Cu;
    // 0x2de92c: 0x8e2700d0  lw          $a3, 0xD0($s1)
    ctx->pc = 0x2de92cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2de930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de934: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2de934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2de938: 0xc0a1258  jal         func_284960
    ctx->pc = 0x2DE938u;
    SET_GPR_U32(ctx, 31, 0x2DE940u);
    ctx->pc = 0x2DE93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE938u;
    // 0x2de93c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284960u, 0x2DE938u, 0x2DE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE940u;
label_2de940:
    // 0x2de940: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2de944: 0x8e2600cc  lw          $a2, 0xCC($s1)
    ctx->pc = 0x2de944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2de948: 0xc0a13c0  jal         func_284F00
    ctx->pc = 0x2DE948u;
    SET_GPR_U32(ctx, 31, 0x2DE950u);
    ctx->pc = 0x2DE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE948u;
    // 0x2de94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F00u, 0x2DE948u, 0x2DE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE950u;
label_2de950:
    // 0x2de950: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2de950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de954: 0x0  nop
    ctx->pc = 0x2de954u;
    // NOP
label_2de958:
    // 0x2de958: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x2de958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2de95c: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DE95Cu;
    {
        const bool branch_taken_0x2de95c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de95c) {
            ctx->pc = 0x2DE9A0u;
            goto label_2de9a0;
        }
    }
    ctx->pc = 0x2DE964u;
    // 0x2de964: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2de964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2de968: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2de968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2de96c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE96Cu;
    {
        const bool branch_taken_0x2de96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de96c) {
            ctx->pc = 0x2DE988u;
            goto label_2de988;
        }
    }
    ctx->pc = 0x2DE974u;
    // 0x2de974: 0x8e2700e0  lw          $a3, 0xE0($s1)
    ctx->pc = 0x2de974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2de978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de97c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2de97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2de980: 0xc0a1258  jal         func_284960
    ctx->pc = 0x2DE980u;
    SET_GPR_U32(ctx, 31, 0x2DE988u);
    ctx->pc = 0x2DE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE980u;
    // 0x2de984: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284960u, 0x2DE980u, 0x2DE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE988u;
label_2de988:
    // 0x2de988: 0x8e2500e0  lw          $a1, 0xE0($s1)
    ctx->pc = 0x2de988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2de98c: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x2de98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2de990: 0xc0a13c0  jal         func_284F00
    ctx->pc = 0x2DE990u;
    SET_GPR_U32(ctx, 31, 0x2DE998u);
    ctx->pc = 0x2DE994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE990u;
    // 0x2de994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F00u, 0x2DE990u, 0x2DE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE998u;
label_2de998:
    // 0x2de998: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2de998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de99c: 0x0  nop
    ctx->pc = 0x2de99cu;
    // NOP
label_2de9a0:
    // 0x2de9a0: 0x8e2800d4  lw          $t0, 0xD4($s1)
    ctx->pc = 0x2de9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2de9a4: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DE9A4u;
    {
        const bool branch_taken_0x2de9a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de9a4) {
            ctx->pc = 0x2DEA00u;
            goto label_2dea00;
        }
    }
    ctx->pc = 0x2DE9ACu;
    // 0x2de9ac: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2de9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2de9b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2de9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2de9b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DE9B4u;
    {
        const bool branch_taken_0x2de9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de9b4) {
            ctx->pc = 0x2DE9E8u;
            goto label_2de9e8;
        }
    }
    ctx->pc = 0x2DE9BCu;
    // 0x2de9bc: 0x922200c7  lbu         $v0, 0xC7($s1)
    ctx->pc = 0x2de9bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x2de9c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE9C0u;
    {
        const bool branch_taken_0x2de9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de9c0) {
            ctx->pc = 0x2DE9E8u;
            goto label_2de9e8;
        }
    }
    ctx->pc = 0x2DE9C8u;
    // 0x2de9c8: 0x8e2700d8  lw          $a3, 0xD8($s1)
    ctx->pc = 0x2de9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2de9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9d0: 0x86290054  lh          $t1, 0x54($s1)
    ctx->pc = 0x2de9d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2de9d4: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2de9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2de9d8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2de9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2de9dc: 0xc0a1cb8  jal         func_2872E0
    ctx->pc = 0x2DE9DCu;
    SET_GPR_U32(ctx, 31, 0x2DE9E4u);
    ctx->pc = 0x2DE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9DCu;
    // 0x2de9e0: 0x262a00c8  addiu       $t2, $s1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2872E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2872E0u, 0x2DE9DCu, 0x2DE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9E4u;
label_2de9e4:
    // 0x2de9e4: 0x0  nop
    ctx->pc = 0x2de9e4u;
    // NOP
label_2de9e8:
    // 0x2de9e8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2de9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2de9ec: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x2de9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2de9f0: 0xc0a1df8  jal         func_2877E0
    ctx->pc = 0x2DE9F0u;
    SET_GPR_U32(ctx, 31, 0x2DE9F8u);
    ctx->pc = 0x2DE9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9F0u;
    // 0x2de9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2877E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2877E0u, 0x2DE9F0u, 0x2DE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9F8u;
label_2de9f8:
    // 0x2de9f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2de9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2de9fc: 0x0  nop
    ctx->pc = 0x2de9fcu;
    // NOP
label_2dea00:
    // 0x2dea00: 0x8e2800e4  lw          $t0, 0xE4($s1)
    ctx->pc = 0x2dea00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x2dea04: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DEA04u;
    {
        const bool branch_taken_0x2dea04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea04) {
            ctx->pc = 0x2DEA60u;
            goto label_2dea60;
        }
    }
    ctx->pc = 0x2DEA0Cu;
    // 0x2dea0c: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2dea0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2dea10: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2dea14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DEA14u;
    {
        const bool branch_taken_0x2dea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dea14) {
            ctx->pc = 0x2DEA48u;
            goto label_2dea48;
        }
    }
    ctx->pc = 0x2DEA1Cu;
    // 0x2dea1c: 0x922200c7  lbu         $v0, 0xC7($s1)
    ctx->pc = 0x2dea1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x2dea20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DEA20u;
    {
        const bool branch_taken_0x2dea20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea20) {
            ctx->pc = 0x2DEA48u;
            goto label_2dea48;
        }
    }
    ctx->pc = 0x2DEA28u;
    // 0x2dea28: 0x8e2700e8  lw          $a3, 0xE8($s1)
    ctx->pc = 0x2dea28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2dea2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea30: 0x86290054  lh          $t1, 0x54($s1)
    ctx->pc = 0x2dea30u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2dea34: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2dea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2dea38: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2dea38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2dea3c: 0xc0a1cb8  jal         func_2872E0
    ctx->pc = 0x2DEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA44u);
    ctx->pc = 0x2DEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA3Cu;
    // 0x2dea40: 0x262a00c9  addiu       $t2, $s1, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2872E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2872E0u, 0x2DEA3Cu, 0x2DEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA44u;
label_2dea44:
    // 0x2dea44: 0x0  nop
    ctx->pc = 0x2dea44u;
    // NOP
label_2dea48:
    // 0x2dea48: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x2dea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2dea4c: 0x8e2600e4  lw          $a2, 0xE4($s1)
    ctx->pc = 0x2dea4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x2dea50: 0xc0a1df8  jal         func_2877E0
    ctx->pc = 0x2DEA50u;
    SET_GPR_U32(ctx, 31, 0x2DEA58u);
    ctx->pc = 0x2DEA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA50u;
    // 0x2dea54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2877E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2877E0u, 0x2DEA50u, 0x2DEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA58u;
label_2dea58:
    // 0x2dea58: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dea58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dea5c: 0x0  nop
    ctx->pc = 0x2dea5cu;
    // NOP
label_2dea60:
    // 0x2dea60: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x2dea60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2dea64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dea68: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x2dea68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dea6c: 0x86240054  lh          $a0, 0x54($s1)
    ctx->pc = 0x2dea6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2dea70: 0x86230056  lh          $v1, 0x56($s1)
    ctx->pc = 0x2dea70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x2dea74: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2dea74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dea78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DEA78u;
    {
        const bool branch_taken_0x2dea78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dea78) {
            ctx->pc = 0x2DEA90u;
            goto label_2dea90;
        }
    }
    ctx->pc = 0x2DEA80u;
    // 0x2dea80: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEA80u;
    {
        const bool branch_taken_0x2dea80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA80u;
        // 0x2dea84: 0xa22000c7  sb          $zero, 0xC7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea80) {
            ctx->pc = 0x2DEA90u;
            goto label_2dea90;
        }
    }
    ctx->pc = 0x2DEA88u;
    // 0x2dea88: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2DEA88u;
    SET_GPR_U32(ctx, 31, 0x2DEA90u);
    ctx->pc = 0x2DEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA88u;
    // 0x2dea8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2DEA88u, 0x2DEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA90u;
label_2dea90:
    // 0x2dea90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dea94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dea94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dea98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dea98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA9Cu;
        // 0x2deaa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEAA4u;
}
