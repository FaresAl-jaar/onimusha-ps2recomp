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

// Function: sub_0028C920
// Address: 0x28c920 - 0x28cbb8
void sub_0028C920_0x28c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C920_0x28c920");
#endif

    switch (ctx->pc) {
        case 0x28c96cu: goto label_28c96c;
        case 0x28c97cu: goto label_28c97c;
        case 0x28c990u: goto label_28c990;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28c9d8u: goto label_28c9d8;
        case 0x28c9e8u: goto label_28c9e8;
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca1cu: goto label_28ca1c;
        case 0x28ca44u: goto label_28ca44;
        case 0x28caf0u: goto label_28caf0;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb60u: goto label_28cb60;
        case 0x28cb70u: goto label_28cb70;
        case 0x28cb84u: goto label_28cb84;
        default: break;
    }

    ctx->pc = 0x28c920u;

    // 0x28c920: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28c924: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28c928: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28c92c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28c92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28c930: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x28c930u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c934: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28c938: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28c938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c93c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28c940: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28c940u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28c948: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x28c948u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c94c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c950: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x28c950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c958: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28c95c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c960: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28c960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c964: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x28C964u;
    SET_GPR_U32(ctx, 31, 0x28C96Cu);
    ctx->pc = 0x28C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C964u;
    // 0x28c968: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x28C964u, 0x28C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C96Cu;
label_28c96c:
    // 0x28c96c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C96Cu;
    {
        const bool branch_taken_0x28c96c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C96Cu;
        // 0x28c970: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c96c) {
            ctx->pc = 0x28C988u;
            goto label_28c988;
        }
    }
    ctx->pc = 0x28C974u;
    // 0x28c974: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28C974u;
    SET_GPR_U32(ctx, 31, 0x28C97Cu);
    ctx->pc = 0x28C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C974u;
    // 0x28c978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28C974u, 0x28C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C97Cu;
label_28c97c:
    // 0x28c97c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x28C97Cu;
    {
        const bool branch_taken_0x28c97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C97Cu;
        // 0x28c980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c97c) {
            ctx->pc = 0x28CB88u;
            goto label_28cb88;
        }
    }
    ctx->pc = 0x28C984u;
    // 0x28c984: 0x0  nop
    ctx->pc = 0x28c984u;
    // NOP
label_28c988:
    // 0x28c988: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x28C988u;
    SET_GPR_U32(ctx, 31, 0x28C990u);
    ctx->pc = 0x28C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C988u;
    // 0x28c98c: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28C988u, 0x28C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C990u;
label_28c990:
    // 0x28c990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c994: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x28C994u;
    {
        const bool branch_taken_0x28c994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C994u;
        // 0x28c998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c994) {
            ctx->pc = 0x28C9C8u;
            goto label_28c9c8;
        }
    }
    ctx->pc = 0x28C99Cu;
    // 0x28c99c: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x28C99Cu;
    SET_GPR_U32(ctx, 31, 0x28C9A4u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x28C99Cu, 0x28C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9A4u;
label_28c9a4:
    // 0x28c9a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x28c9a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28c9ac: 0x246375e0  addiu       $v1, $v1, 0x75E0
    ctx->pc = 0x28c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30176));
    // 0x28c9b0: 0x24427630  addiu       $v0, $v0, 0x7630
    ctx->pc = 0x28c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30256));
    // 0x28c9b4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x28c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x28c9b8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x28c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x28c9bc: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x28c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x28c9c0: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x28c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x28c9c4: 0x0  nop
    ctx->pc = 0x28c9c4u;
    // NOP
label_28c9c8:
    // 0x28c9c8: 0x1200006b  beqz        $s0, . + 4 + (0x6B << 2)
    ctx->pc = 0x28C9C8u;
    {
        const bool branch_taken_0x28c9c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C9C8u;
        // 0x28c9cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9c8) {
            ctx->pc = 0x28CB78u;
            goto label_28cb78;
        }
    }
    ctx->pc = 0x28C9D0u;
    // 0x28c9d0: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x28C9D0u;
    SET_GPR_U32(ctx, 31, 0x28C9D8u);
    ctx->pc = 0x28C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9D0u;
    // 0x28c9d4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x28C9D0u, 0x28C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9D8u;
label_28c9d8:
    // 0x28c9d8: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x28c9d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x28c9dc: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28c9e0: 0xc09d524  jal         func_275490
    ctx->pc = 0x28C9E0u;
    SET_GPR_U32(ctx, 31, 0x28C9E8u);
    ctx->pc = 0x28C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9E0u;
    // 0x28c9e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28C9E0u, 0x28C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9E8u;
label_28c9e8:
    // 0x28c9e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28c9e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28c9ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x28C9F0u;
    {
        const bool branch_taken_0x28c9f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C9F0u;
        // 0x28c9f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9f0) {
            ctx->pc = 0x28CA20u;
            goto label_28ca20;
        }
    }
    ctx->pc = 0x28C9F8u;
    // 0x28c9f8: 0x92660003  lbu         $a2, 0x3($s3)
    ctx->pc = 0x28c9f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x28c9fc: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28ca00: 0xc09d524  jal         func_275490
    ctx->pc = 0x28CA00u;
    SET_GPR_U32(ctx, 31, 0x28CA08u);
    ctx->pc = 0x28CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA00u;
    // 0x28ca04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28CA00u, 0x28CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA08u;
label_28ca08:
    // 0x28ca08: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x28ca08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28ca0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28ca0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca10: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28ca14: 0xc09d524  jal         func_275490
    ctx->pc = 0x28CA14u;
    SET_GPR_U32(ctx, 31, 0x28CA1Cu);
    ctx->pc = 0x28CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA14u;
    // 0x28ca18: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28CA14u, 0x28CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA1Cu;
label_28ca1c:
    // 0x28ca1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ca1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ca20:
    // 0x28ca20: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x28ca20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca24: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x28ca24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca28: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x28ca28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ca34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ca34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca38: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x28ca38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca3c: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x28CA3Cu;
    SET_GPR_U32(ctx, 31, 0x28CA44u);
    ctx->pc = 0x28CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA3Cu;
    // 0x28ca40: 0x26ab0020  addiu       $t3, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x28CA3Cu, 0x28CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA44u;
label_28ca44:
    // 0x28ca44: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x28ca44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ca4c: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x28ca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca50: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x28ca50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca54: 0xa2020051  sb          $v0, 0x51($s0)
    ctx->pc = 0x28ca54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ca58: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CA58u;
    {
        const bool branch_taken_0x28ca58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA58u;
        // 0x28ca5c: 0xa2000070  sb          $zero, 0x70($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca58) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA60u;
    // 0x28ca60: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x28ca60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x28ca64: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x28ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
label_28ca68:
    // 0x28ca68: 0xa2140071  sb          $s4, 0x71($s0)
    ctx->pc = 0x28ca68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 20));
    // 0x28ca6c: 0x92a308e8  lbu         $v1, 0x8E8($s5)
    ctx->pc = 0x28ca6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2280)));
    // 0x28ca70: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28ca74: 0xa6030082  sh          $v1, 0x82($s0)
    ctx->pc = 0x28ca74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ca78: 0xa6000072  sh          $zero, 0x72($s0)
    ctx->pc = 0x28ca78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca7c: 0xa6000074  sh          $zero, 0x74($s0)
    ctx->pc = 0x28ca7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca80: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x28ca80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca84: 0xa6000078  sh          $zero, 0x78($s0)
    ctx->pc = 0x28ca84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ca88: 0xa602007a  sh          $v0, 0x7A($s0)
    ctx->pc = 0x28ca88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ca8c: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x28ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ca90: 0xa602007e  sh          $v0, 0x7E($s0)
    ctx->pc = 0x28ca90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ca94: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CA94u;
    {
        const bool branch_taken_0x28ca94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA94u;
        // 0x28ca98: 0xa6020080  sh          $v0, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca94) {
            ctx->pc = 0x28CAA8u;
            goto label_28caa8;
        }
    }
    ctx->pc = 0x28CA9Cu;
    // 0x28ca9c: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x28ca9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x28caa0: 0xa602007a  sh          $v0, 0x7A($s0)
    ctx->pc = 0x28caa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x28caa4: 0x0  nop
    ctx->pc = 0x28caa4u;
    // NOP
label_28caa8:
    // 0x28caa8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CAA8u;
    {
        const bool branch_taken_0x28caa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28caa8) {
            ctx->pc = 0x28CAB8u;
            goto label_28cab8;
        }
    }
    ctx->pc = 0x28CAB0u;
    // 0x28cab0: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x28cab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x28cab4: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x28cab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
label_28cab8:
    // 0x28cab8: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x28cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cabc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x28cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x28cac0: 0xa6000158  sh          $zero, 0x158($s0)
    ctx->pc = 0x28cac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x28cac4: 0xa600015a  sh          $zero, 0x15A($s0)
    ctx->pc = 0x28cac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x28cac8: 0xa200015c  sb          $zero, 0x15C($s0)
    ctx->pc = 0x28cac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 348), (uint8_t)GPR_U32(ctx, 0));
    // 0x28cacc: 0xa200015d  sb          $zero, 0x15D($s0)
    ctx->pc = 0x28caccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 349), (uint8_t)GPR_U32(ctx, 0));
    // 0x28cad0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CAD0u;
    {
        const bool branch_taken_0x28cad0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAD0u;
        // 0x28cad4: 0xa200015e  sb          $zero, 0x15E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 350), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cad0) {
            ctx->pc = 0x28CAF0u;
            goto label_28caf0;
        }
    }
    ctx->pc = 0x28CAD8u;
    // 0x28cad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cadc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28cadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cae0: 0xa202015c  sb          $v0, 0x15C($s0)
    ctx->pc = 0x28cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 348), (uint8_t)GPR_U32(ctx, 2));
    // 0x28cae4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x28cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x28cae8: 0xc049522  jal         func_125488
    ctx->pc = 0x28CAE8u;
    SET_GPR_U32(ctx, 31, 0x28CAF0u);
    ctx->pc = 0x28CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAE8u;
    // 0x28caec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x28CAE8u, 0x28CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAF0u;
label_28caf0:
    // 0x28caf0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x28CAF0u;
    {
        const bool branch_taken_0x28caf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAF0u;
        // 0x28caf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28caf0) {
            ctx->pc = 0x28CB28u;
            goto label_28cb28;
        }
    }
    ctx->pc = 0x28CAF8u;
    // 0x28caf8: 0xc0a2b68  jal         func_28ADA0
    ctx->pc = 0x28CAF8u;
    SET_GPR_U32(ctx, 31, 0x28CB00u);
    ctx->pc = 0x28CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAF8u;
    // 0x28cafc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ADA0u, 0x28CAF8u, 0x28CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB00u;
label_28cb00:
    // 0x28cb00: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x28cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x28cb04: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x28cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x28cb08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CB08u;
    {
        const bool branch_taken_0x28cb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cb08) {
            ctx->pc = 0x28CB28u;
            goto label_28cb28;
        }
    }
    ctx->pc = 0x28CB10u;
    // 0x28cb10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28cb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb18: 0xa202015d  sb          $v0, 0x15D($s0)
    ctx->pc = 0x28cb18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 349), (uint8_t)GPR_U32(ctx, 2));
    // 0x28cb1c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x28cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x28cb20: 0xc049522  jal         func_125488
    ctx->pc = 0x28CB20u;
    SET_GPR_U32(ctx, 31, 0x28CB28u);
    ctx->pc = 0x28CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB20u;
    // 0x28cb24: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x28CB20u, 0x28CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB28u;
label_28cb28:
    // 0x28cb28: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x28CB28u;
    {
        const bool branch_taken_0x28cb28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB28u;
        // 0x28cb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb28) {
            ctx->pc = 0x28CB60u;
            goto label_28cb60;
        }
    }
    ctx->pc = 0x28CB30u;
    // 0x28cb30: 0xc0a2cb0  jal         func_28B2C0
    ctx->pc = 0x28CB30u;
    SET_GPR_U32(ctx, 31, 0x28CB38u);
    ctx->pc = 0x28CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB30u;
    // 0x28cb34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B2C0u, 0x28CB30u, 0x28CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB38u;
label_28cb38:
    // 0x28cb38: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x28cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x28cb3c: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x28cb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CB40u;
    {
        const bool branch_taken_0x28cb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cb40) {
            ctx->pc = 0x28CB60u;
            goto label_28cb60;
        }
    }
    ctx->pc = 0x28CB48u;
    // 0x28cb48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb50: 0xa202015e  sb          $v0, 0x15E($s0)
    ctx->pc = 0x28cb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 350), (uint8_t)GPR_U32(ctx, 2));
    // 0x28cb54: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x28cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x28cb58: 0xc049522  jal         func_125488
    ctx->pc = 0x28CB58u;
    SET_GPR_U32(ctx, 31, 0x28CB60u);
    ctx->pc = 0x28CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB58u;
    // 0x28cb5c: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x28CB58u, 0x28CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB60u;
label_28cb60:
    // 0x28cb60: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x28cb60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28cb64: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28cb68: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28CB68u;
    SET_GPR_U32(ctx, 31, 0x28CB70u);
    ctx->pc = 0x28CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB68u;
    // 0x28cb6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28CB68u, 0x28CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB70u;
label_28cb70:
    // 0x28cb70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28CB70u;
    {
        const bool branch_taken_0x28cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB70u;
        // 0x28cb74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb70) {
            ctx->pc = 0x28CB88u;
            goto label_28cb88;
        }
    }
    ctx->pc = 0x28CB78u;
label_28cb78:
    // 0x28cb78: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28cb7c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28CB7Cu;
    SET_GPR_U32(ctx, 31, 0x28CB84u);
    ctx->pc = 0x28CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB7Cu;
    // 0x28cb80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28CB7Cu, 0x28CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB84u;
label_28cb84:
    // 0x28cb84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28cb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cb88:
    // 0x28cb88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28cb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28cb8c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28cb8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28cb90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28cb90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28cb94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28cb94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28cb98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28cb98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28cb9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28cb9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28cba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28cba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28cba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28cba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x28CBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBB0u;
        // 0x28cbb4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CBB8u;
}
