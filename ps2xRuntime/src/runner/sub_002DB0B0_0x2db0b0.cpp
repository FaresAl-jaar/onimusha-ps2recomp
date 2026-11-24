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

// Function: sub_002DB0B0
// Address: 0x2db0b0 - 0x2db36c
void sub_002DB0B0_0x2db0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB0B0_0x2db0b0");
#endif

    switch (ctx->pc) {
        case 0x2db0ecu: goto label_2db0ec;
        case 0x2db104u: goto label_2db104;
        case 0x2db110u: goto label_2db110;
        case 0x2db120u: goto label_2db120;
        case 0x2db134u: goto label_2db134;
        case 0x2db148u: goto label_2db148;
        case 0x2db174u: goto label_2db174;
        case 0x2db18cu: goto label_2db18c;
        case 0x2db194u: goto label_2db194;
        case 0x2db1a4u: goto label_2db1a4;
        case 0x2db208u: goto label_2db208;
        case 0x2db224u: goto label_2db224;
        case 0x2db250u: goto label_2db250;
        case 0x2db278u: goto label_2db278;
        case 0x2db2a8u: goto label_2db2a8;
        case 0x2db2f0u: goto label_2db2f0;
        case 0x2db318u: goto label_2db318;
        case 0x2db32cu: goto label_2db32c;
        case 0x2db33cu: goto label_2db33c;
        default: break;
    }

    ctx->pc = 0x2db0b0u;

    // 0x2db0b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2db0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2db0b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2db0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2db0b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2db0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2db0bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2db0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2db0c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2db0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2db0c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2db0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2db0c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2db0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2db0cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2db0ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2db0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2db0d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2db0d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2db0dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2db0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0e0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2db0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2db0e4: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2DB0E4u;
    SET_GPR_U32(ctx, 31, 0x2DB0ECu);
    ctx->pc = 0x2DB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB0E4u;
    // 0x2db0e8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2DB0E4u, 0x2DB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0ECu;
label_2db0ec:
    // 0x2db0ec: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB0ECu;
    {
        const bool branch_taken_0x2db0ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db0ec) {
            ctx->pc = 0x2DB0F8u;
            goto label_2db0f8;
        }
    }
    ctx->pc = 0x2DB0F4u;
    // 0x2db0f4: 0x8f928128  lw          $s2, -0x7ED8($gp)
    ctx->pc = 0x2db0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_2db0f8:
    // 0x2db0f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2db0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0fc: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2DB0FCu;
    SET_GPR_U32(ctx, 31, 0x2DB104u);
    ctx->pc = 0x2DB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB0FCu;
    // 0x2db100: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2DB0FCu, 0x2DB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB104u;
label_2db104:
    // 0x2db104: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2db108: 0xc09d504  jal         func_275410
    ctx->pc = 0x2DB108u;
    SET_GPR_U32(ctx, 31, 0x2DB110u);
    ctx->pc = 0x2DB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB108u;
    // 0x2db10c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275410u, 0x2DB108u, 0x2DB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB110u;
label_2db110:
    // 0x2db110: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2db110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db114: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2db118: 0xc09d550  jal         func_275540
    ctx->pc = 0x2DB118u;
    SET_GPR_U32(ctx, 31, 0x2DB120u);
    ctx->pc = 0x2DB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB118u;
    // 0x2db11c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275540u, 0x2DB118u, 0x2DB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB120u;
label_2db120:
    // 0x2db120: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB120u;
    {
        const bool branch_taken_0x2db120 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB120u;
        // 0x2db124: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db120) {
            ctx->pc = 0x2DB140u;
            goto label_2db140;
        }
    }
    ctx->pc = 0x2DB128u;
    // 0x2db128: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2db128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2db12c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB12Cu;
    SET_GPR_U32(ctx, 31, 0x2DB134u);
    ctx->pc = 0x2DB130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB12Cu;
    // 0x2db130: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB12Cu, 0x2DB134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB134u;
label_2db134:
    // 0x2db134: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2DB134u;
    {
        const bool branch_taken_0x2db134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db134) {
            ctx->pc = 0x2DB340u;
            goto label_2db340;
        }
    }
    ctx->pc = 0x2DB13Cu;
    // 0x2db13c: 0x0  nop
    ctx->pc = 0x2db13cu;
    // NOP
label_2db140:
    // 0x2db140: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2DB140u;
    SET_GPR_U32(ctx, 31, 0x2DB148u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2DB140u, 0x2DB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB148u;
label_2db148:
    // 0x2db148: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x2db148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2db14c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2db14cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db150: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2db150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2db154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db158: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2db158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2db15c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2db15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2db160: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2db160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2db164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2db164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db168: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2db168u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db16c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DB16Cu;
    SET_GPR_U32(ctx, 31, 0x2DB174u);
    ctx->pc = 0x2DB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB16Cu;
    // 0x2db170: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DB16Cu, 0x2DB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB174u;
label_2db174:
    // 0x2db174: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2db174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2db178: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2db17c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2db17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db180: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2db180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2db184: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2DB184u;
    SET_GPR_U32(ctx, 31, 0x2DB18Cu);
    ctx->pc = 0x2DB188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB184u;
    // 0x2db188: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2DB184u, 0x2DB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB18Cu;
label_2db18c:
    // 0x2db18c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x2DB18Cu;
    SET_GPR_U32(ctx, 31, 0x2DB194u);
    ctx->pc = 0x2DB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB18Cu;
    // 0x2db190: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x2DB18Cu, 0x2DB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB194u;
label_2db194:
    // 0x2db194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB194u;
    {
        const bool branch_taken_0x2db194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB194u;
        // 0x2db198: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db194) {
            ctx->pc = 0x2DB1B0u;
            goto label_2db1b0;
        }
    }
    ctx->pc = 0x2DB19Cu;
    // 0x2db19c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB19Cu;
    SET_GPR_U32(ctx, 31, 0x2DB1A4u);
    ctx->pc = 0x2DB1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB19Cu;
    // 0x2db1a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB19Cu, 0x2DB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB1A4u;
label_2db1a4:
    // 0x2db1a4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2DB1A4u;
    {
        const bool branch_taken_0x2db1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1a4) {
            ctx->pc = 0x2DB340u;
            goto label_2db340;
        }
    }
    ctx->pc = 0x2DB1ACu;
    // 0x2db1ac: 0x0  nop
    ctx->pc = 0x2db1acu;
    // NOP
label_2db1b0:
    // 0x2db1b0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2db1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2db1b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2db1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2db1b8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2db1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2db1bc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x2db1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2db1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db1c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2db1c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db1cc: 0x24829000  addiu       $v0, $a0, -0x7000
    ctx->pc = 0x2db1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938624));
    // 0x2db1d0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2db1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2db1d4: 0x24628700  addiu       $v0, $v1, -0x7900
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x2db1d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2db1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db1dc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2db1dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2db1e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2db1e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db1e4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2db1e4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x2db1e8: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x2db1e8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x2db1ec: 0x0  nop
    ctx->pc = 0x2db1ecu;
    // NOP
    // 0x2db1f0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2db1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db1f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB1F4u;
    {
        const bool branch_taken_0x2db1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1F4u;
        // 0x2db1f8: 0x46020882  mul.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1f4) {
            ctx->pc = 0x2DB210u;
            goto label_2db210;
        }
    }
    ctx->pc = 0x2DB1FCu;
    // 0x2db1fc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2db1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2db200: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB200u;
    SET_GPR_U32(ctx, 31, 0x2DB208u);
    ctx->pc = 0x2DB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB200u;
    // 0x2db204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB200u, 0x2DB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB208u;
label_2db208:
    // 0x2db208: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2DB208u;
    {
        const bool branch_taken_0x2db208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db208) {
            ctx->pc = 0x2DB340u;
            goto label_2db340;
        }
    }
    ctx->pc = 0x2DB210u;
label_2db210:
    // 0x2db210: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2db210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db214: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB214u;
    {
        const bool branch_taken_0x2db214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB214u;
        // 0x2db218: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db214) {
            ctx->pc = 0x2DB230u;
            goto label_2db230;
        }
    }
    ctx->pc = 0x2DB21Cu;
    // 0x2db21c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB21Cu;
    SET_GPR_U32(ctx, 31, 0x2DB224u);
    ctx->pc = 0x2DB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB21Cu;
    // 0x2db220: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB21Cu, 0x2DB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB224u;
label_2db224:
    // 0x2db224: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2DB224u;
    {
        const bool branch_taken_0x2db224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db224) {
            ctx->pc = 0x2DB340u;
            goto label_2db340;
        }
    }
    ctx->pc = 0x2DB22Cu;
    // 0x2db22c: 0x0  nop
    ctx->pc = 0x2db22cu;
    // NOP
label_2db230:
    // 0x2db230: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2db230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x2db234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db238: 0x0  nop
    ctx->pc = 0x2db238u;
    // NOP
    // 0x2db23c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2db23cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db240: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB240u;
    {
        const bool branch_taken_0x2db240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB240u;
        // 0x2db244: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db240) {
            ctx->pc = 0x2DB258u;
            goto label_2db258;
        }
    }
    ctx->pc = 0x2DB248u;
    // 0x2db248: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB248u;
    SET_GPR_U32(ctx, 31, 0x2DB250u);
    ctx->pc = 0x2DB24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB248u;
    // 0x2db24c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB248u, 0x2DB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB250u;
label_2db250:
    // 0x2db250: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2DB250u;
    {
        const bool branch_taken_0x2db250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db250) {
            ctx->pc = 0x2DB340u;
            goto label_2db340;
        }
    }
    ctx->pc = 0x2DB258u;
label_2db258:
    // 0x2db258: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x2db258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x2db25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db260: 0x0  nop
    ctx->pc = 0x2db260u;
    // NOP
    // 0x2db264: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2db264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db268: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB268u;
    {
        const bool branch_taken_0x2db268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB268u;
        // 0x2db26c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db268) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB270u;
    // 0x2db270: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB270u;
    SET_GPR_U32(ctx, 31, 0x2DB278u);
    ctx->pc = 0x2DB274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB270u;
    // 0x2db274: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB270u, 0x2DB278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB278u;
label_2db278:
    // 0x2db278: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2DB278u;
    {
        const bool branch_taken_0x2db278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db278) {
            ctx->pc = 0x2DB340u;
            goto label_2db340;
        }
    }
    ctx->pc = 0x2DB280u;
label_2db280:
    // 0x2db280: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2db280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2db284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db288: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2db288u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2db28c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2db28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db290: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2db290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2db294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db298: 0x0  nop
    ctx->pc = 0x2db298u;
    // NOP
    // 0x2db29c: 0x46012541  sub.s       $f21, $f4, $f1
    ctx->pc = 0x2db29cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2db2a0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB2A0u;
    {
        const bool branch_taken_0x2db2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2A0u;
        // 0x2db2a4: 0x46001501  sub.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2a0) {
            ctx->pc = 0x2DB308u;
            goto label_2db308;
        }
    }
    ctx->pc = 0x2DB2A8u;
label_2db2a8:
    // 0x2db2a8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2db2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2db2ac: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2db2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2db2b0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2db2b4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2db2b8: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x2db2b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2db2bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db2c0: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x2db2c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2db2c4: 0x92670003  lbu         $a3, 0x3($s3)
    ctx->pc = 0x2db2c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2db2c8: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x2db2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2db2cc: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2db2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2db2d0: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x2db2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2db2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db2d8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2db2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2dc: 0x4603a882  mul.s       $f2, $f21, $f3
    ctx->pc = 0x2db2dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x2db2e0: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x2db2e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2db2e4: 0x4603a042  mul.s       $f1, $f20, $f3
    ctx->pc = 0x2db2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2db2e8: 0xc0b6bc4  jal         func_2DAF10
    ctx->pc = 0x2DB2E8u;
    SET_GPR_U32(ctx, 31, 0x2DB2F0u);
    ctx->pc = 0x2DB2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2E8u;
    // 0x2db2ec: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF10u, 0x2DB2E8u, 0x2DB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2F0u;
label_2db2f0:
    // 0x2db2f0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2db2f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2db2f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2db2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2db2f8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2db2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2db2fc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DB2FCu;
    {
        const bool branch_taken_0x2db2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2FCu;
        // 0x2db300: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2fc) {
            ctx->pc = 0x2DB2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db2a8;
        }
    }
    ctx->pc = 0x2DB304u;
    // 0x2db304: 0x0  nop
    ctx->pc = 0x2db304u;
    // NOP
label_2db308:
    // 0x2db308: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB308u;
    {
        const bool branch_taken_0x2db308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB308u;
        // 0x2db30c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db308) {
            ctx->pc = 0x2DB330u;
            goto label_2db330;
        }
    }
    ctx->pc = 0x2DB310u;
    // 0x2db310: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2DB310u;
    SET_GPR_U32(ctx, 31, 0x2DB318u);
    ctx->pc = 0x2DB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB310u;
    // 0x2db314: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2DB310u, 0x2DB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB318u;
label_2db318:
    // 0x2db318: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2db318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2db31c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2db320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db324: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2DB324u;
    SET_GPR_U32(ctx, 31, 0x2DB32Cu);
    ctx->pc = 0x2DB328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB324u;
    // 0x2db328: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2DB324u, 0x2DB32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB32Cu;
label_2db32c:
    // 0x2db32c: 0x0  nop
    ctx->pc = 0x2db32cu;
    // NOP
label_2db330:
    // 0x2db330: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2db330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2db334: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DB334u;
    SET_GPR_U32(ctx, 31, 0x2DB33Cu);
    ctx->pc = 0x2DB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB334u;
    // 0x2db338: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DB334u, 0x2DB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB33Cu;
label_2db33c:
    // 0x2db33c: 0x0  nop
    ctx->pc = 0x2db33cu;
    // NOP
label_2db340:
    // 0x2db340: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2db340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db344: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2db344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db348: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2db348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2db34c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2db34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db350: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2db350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db354: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2db354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db358: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2db358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db35c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2db35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db364: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB364u;
        // 0x2db368: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB36Cu;
}
