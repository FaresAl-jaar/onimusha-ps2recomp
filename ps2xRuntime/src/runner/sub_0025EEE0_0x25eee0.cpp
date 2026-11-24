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

// Function: sub_0025EEE0
// Address: 0x25eee0 - 0x25f078
void sub_0025EEE0_0x25eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EEE0_0x25eee0");
#endif

    switch (ctx->pc) {
        case 0x25ef34u: goto label_25ef34;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef58u: goto label_25ef58;
        case 0x25ef80u: goto label_25ef80;
        case 0x25efe0u: goto label_25efe0;
        case 0x25eff0u: goto label_25eff0;
        case 0x25f008u: goto label_25f008;
        case 0x25f020u: goto label_25f020;
        case 0x25f030u: goto label_25f030;
        default: break;
    }

    ctx->pc = 0x25eee0u;

    // 0x25eee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25eee4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25eee8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25eeec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25eef0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25eef0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eef4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25eef8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25eef8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eefc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25ef00: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25ef00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25ef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25ef08: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25ef08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25ef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25ef10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25ef10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ef18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25ef18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ef20: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25ef20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef24: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x25ef24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef28: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x25ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25ef2c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25EF2Cu;
    SET_GPR_U32(ctx, 31, 0x25EF34u);
    ctx->pc = 0x25EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF2Cu;
    // 0x25ef30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25EF2Cu, 0x25EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF34u;
label_25ef34:
    // 0x25ef34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EF34u;
    {
        const bool branch_taken_0x25ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF34u;
        // 0x25ef38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef34) {
            ctx->pc = 0x25EF48u;
            goto label_25ef48;
        }
    }
    ctx->pc = 0x25EF3Cu;
    // 0x25ef3c: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25EF3Cu;
    SET_GPR_U32(ctx, 31, 0x25EF44u);
    ctx->pc = 0x25EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF3Cu;
    // 0x25ef40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25EF3Cu, 0x25EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF44u;
label_25ef44:
    // 0x25ef44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ef44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ef48:
    // 0x25ef48: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25EF48u;
    {
        const bool branch_taken_0x25ef48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF48u;
        // 0x25ef4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef48) {
            ctx->pc = 0x25F040u;
            goto label_25f040;
        }
    }
    ctx->pc = 0x25EF50u;
    // 0x25ef50: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25EF50u;
    SET_GPR_U32(ctx, 31, 0x25EF58u);
    ctx->pc = 0x25EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF50u;
    // 0x25ef54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25EF50u, 0x25EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF58u;
label_25ef58:
    // 0x25ef58: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25ef58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25ef5c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25ef5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef60: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25ef60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25ef64: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25ef64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef68: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25ef68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25ef6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef74: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25ef74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef78: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25EF78u;
    SET_GPR_U32(ctx, 31, 0x25EF80u);
    ctx->pc = 0x25EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF78u;
    // 0x25ef7c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25EF78u, 0x25EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF80u;
label_25ef80:
    // 0x25ef80: 0x92060064  lbu         $a2, 0x64($s0)
    ctx->pc = 0x25ef80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25ef84: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25ef84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25ef88: 0x93a500a0  lbu         $a1, 0xA0($sp)
    ctx->pc = 0x25ef88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ef8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25ef90: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25ef94: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25ef98: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x25ef98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x25ef9c: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x25ef9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
    // 0x25efa0: 0x78255c20  lq          $a1, 0x5C20($at)
    ctx->pc = 0x25efa0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C20u));
    // 0x25efa4: 0x7e050070  sq          $a1, 0x70($s0)
    ctx->pc = 0x25efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 5));
    // 0x25efa8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25efa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25efac: 0x78255c30  lq          $a1, 0x5C30($at)
    ctx->pc = 0x25efacu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C30u));
    // 0x25efb0: 0x7e050080  sq          $a1, 0x80($s0)
    ctx->pc = 0x25efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 5));
    // 0x25efb4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25efb8: 0x78255c40  lq          $a1, 0x5C40($at)
    ctx->pc = 0x25efb8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C40u));
    // 0x25efbc: 0x7e050090  sq          $a1, 0x90($s0)
    ctx->pc = 0x25efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 5));
    // 0x25efc0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25efc4: 0x78255c50  lq          $a1, 0x5C50($at)
    ctx->pc = 0x25efc4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C50u));
    // 0x25efc8: 0x7e0500a0  sq          $a1, 0xA0($s0)
    ctx->pc = 0x25efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 5));
    // 0x25efcc: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x25efccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25efd0: 0x7e0500a0  sq          $a1, 0xA0($s0)
    ctx->pc = 0x25efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 5));
    // 0x25efd4: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x25efd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x25efd8: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25EFD8u;
    SET_GPR_U32(ctx, 31, 0x25EFE0u);
    ctx->pc = 0x25EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFD8u;
    // 0x25efdc: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25EFD8u, 0x25EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFE0u;
label_25efe0:
    // 0x25efe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EFE0u;
    {
        const bool branch_taken_0x25efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFE0u;
        // 0x25efe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efe0) {
            ctx->pc = 0x25EFF0u;
            goto label_25eff0;
        }
    }
    ctx->pc = 0x25EFE8u;
    // 0x25efe8: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25EFE8u;
    SET_GPR_U32(ctx, 31, 0x25EFF0u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25EFE8u, 0x25EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFF0u;
label_25eff0:
    // 0x25eff0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25eff4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25eff8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EFF8u;
    {
        const bool branch_taken_0x25eff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eff8) {
            ctx->pc = 0x25F010u;
            goto label_25f010;
        }
    }
    ctx->pc = 0x25F000u;
    // 0x25f000: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F000u;
    SET_GPR_U32(ctx, 31, 0x25F008u);
    ctx->pc = 0x25F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F000u;
    // 0x25f004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F000u, 0x25F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F008u;
label_25f008:
    // 0x25f008: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F008u;
    {
        const bool branch_taken_0x25f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F008u;
        // 0x25f00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f008) {
            ctx->pc = 0x25F048u;
            goto label_25f048;
        }
    }
    ctx->pc = 0x25F010u;
label_25f010:
    // 0x25f010: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f014: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f018: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F018u;
    SET_GPR_U32(ctx, 31, 0x25F020u);
    ctx->pc = 0x25F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F018u;
    // 0x25f01c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F018u, 0x25F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F020u;
label_25f020:
    // 0x25f020: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F020u;
    {
        const bool branch_taken_0x25f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F020u;
        // 0x25f024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f020) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25F028u;
    // 0x25f028: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F028u;
    SET_GPR_U32(ctx, 31, 0x25F030u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F028u, 0x25F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F030u;
label_25f030:
    // 0x25f030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F030u;
    {
        const bool branch_taken_0x25f030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F030u;
        // 0x25f034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f030) {
            ctx->pc = 0x25F048u;
            goto label_25f048;
        }
    }
    ctx->pc = 0x25F038u;
label_25f038:
    // 0x25f038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F038u;
    {
        const bool branch_taken_0x25f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F038u;
        // 0x25f03c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f038) {
            ctx->pc = 0x25F048u;
            goto label_25f048;
        }
    }
    ctx->pc = 0x25F040u;
label_25f040:
    // 0x25f040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f044: 0x0  nop
    ctx->pc = 0x25f044u;
    // NOP
label_25f048:
    // 0x25f048: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f04c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f04cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f050: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f054: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f058: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f05c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f05cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f060: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f070: 0x3e00008  jr          $ra
    ctx->pc = 0x25F070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F070u;
        // 0x25f074: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F078u;
}
