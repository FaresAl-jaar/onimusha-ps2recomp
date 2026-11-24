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

// Function: sub_0018F870
// Address: 0x18f870 - 0x18fbe8
void sub_0018F870_0x18f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F870_0x18f870");
#endif

    switch (ctx->pc) {
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18f938u: goto label_18f938;
        case 0x18f940u: goto label_18f940;
        case 0x18f95cu: goto label_18f95c;
        case 0x18f980u: goto label_18f980;
        case 0x18f9bcu: goto label_18f9bc;
        case 0x18f9d4u: goto label_18f9d4;
        case 0x18fa10u: goto label_18fa10;
        case 0x18fa24u: goto label_18fa24;
        case 0x18faa8u: goto label_18faa8;
        case 0x18fb00u: goto label_18fb00;
        case 0x18fb10u: goto label_18fb10;
        case 0x18fb54u: goto label_18fb54;
        case 0x18fb60u: goto label_18fb60;
        case 0x18fb74u: goto label_18fb74;
        case 0x18fb8cu: goto label_18fb8c;
        case 0x18fba4u: goto label_18fba4;
        case 0x18fbacu: goto label_18fbac;
        default: break;
    }

    ctx->pc = 0x18f870u;

    // 0x18f870: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18f874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18f878: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18f87c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18f880: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18f884: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18f884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f888: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18f88c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18f88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f890: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18f894: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18f894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f898: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x18f898u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18f89c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18f89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8a0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18f8a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18f8a4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18f8a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18f8a8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18f8a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18f8ac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18f8acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18f8b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18f8b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18f8b4: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x18f8b4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x18f8b8: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x18f8b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x18f8bc: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x18f8bcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x18f8c0: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x18f8c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x18f8c4: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x18f8c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x18f8c8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F8C8u;
    {
        const bool branch_taken_0x18f8c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C8u;
        // 0x18f8cc: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8c8) {
            ctx->pc = 0x18F8D8u;
            goto label_18f8d8;
        }
    }
    ctx->pc = 0x18F8D0u;
    // 0x18f8d0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x18F8D0u;
    {
        const bool branch_taken_0x18f8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8D0u;
        // 0x18f8d4: 0xaf8086e4  sw          $zero, -0x791C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8d0) {
            ctx->pc = 0x18FBB0u;
            goto label_18fbb0;
        }
    }
    ctx->pc = 0x18F8D8u;
label_18f8d8:
    // 0x18f8d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f8dc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x18f8e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f8e4: 0xc0ec6f4  jal         func_3B1BD0
    ctx->pc = 0x18F8E4u;
    SET_GPR_U32(ctx, 31, 0x18F8ECu);
    ctx->pc = 0x18F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8E4u;
    // 0x18f8e8: 0xa022e000  sb          $v0, -0x2000($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959104), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BD0u, 0x18F8E4u, 0x18F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8ECu;
label_18f8ec:
    // 0x18f8ec: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x18f8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x18f8f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f8f4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18F8F4u;
    {
        const bool branch_taken_0x18f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8F4u;
        // 0x18f8f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8f4) {
            ctx->pc = 0x18F948u;
            goto label_18f948;
        }
    }
    ctx->pc = 0x18F8FCu;
    // 0x18f8fc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F8FCu;
    {
        const bool branch_taken_0x18f8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f8fc) {
            ctx->pc = 0x18F918u;
            goto label_18f918;
        }
    }
    ctx->pc = 0x18F904u;
    // 0x18f904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f908: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18F908u;
    {
        const bool branch_taken_0x18f908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f908) {
            ctx->pc = 0x18F960u;
            goto label_18f960;
        }
    }
    ctx->pc = 0x18F910u;
    // 0x18f910: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18F910u;
    {
        const bool branch_taken_0x18f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f910) {
            ctx->pc = 0x18F960u;
            goto label_18f960;
        }
    }
    ctx->pc = 0x18F918u;
label_18f918:
    // 0x18f918: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18f918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18f91c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f920: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18f924: 0xa38286f4  sb          $v0, -0x790C($gp)
    ctx->pc = 0x18f924u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 2));
    // 0x18f928: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18f928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18f92c: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x18f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x18f930: 0xc0b2dd0  jal         func_2CB740
    ctx->pc = 0x18F930u;
    SET_GPR_U32(ctx, 31, 0x18F938u);
    ctx->pc = 0x18F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F930u;
    // 0x18f934: 0xa38286f4  sb          $v0, -0x790C($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB740u, 0x18F930u, 0x18F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F938u;
label_18f938:
    // 0x18f938: 0xc0b2dec  jal         func_2CB7B0
    ctx->pc = 0x18F938u;
    SET_GPR_U32(ctx, 31, 0x18F940u);
    ctx->pc = 0x18F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F938u;
    // 0x18f93c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7B0u, 0x18F938u, 0x18F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F940u;
label_18f940:
    // 0x18f940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F940u;
    {
        const bool branch_taken_0x18f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f940) {
            ctx->pc = 0x18F960u;
            goto label_18f960;
        }
    }
    ctx->pc = 0x18F948u;
label_18f948:
    // 0x18f948: 0x938286f4  lbu         $v0, -0x790C($gp)
    ctx->pc = 0x18f948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x18f94c: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x18f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18f950: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x18f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x18f954: 0xc0b2dec  jal         func_2CB7B0
    ctx->pc = 0x18F954u;
    SET_GPR_U32(ctx, 31, 0x18F95Cu);
    ctx->pc = 0x18F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F954u;
    // 0x18f958: 0xa38286f4  sb          $v0, -0x790C($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7B0u, 0x18F954u, 0x18F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F95Cu;
label_18f95c:
    // 0x18f95c: 0x0  nop
    ctx->pc = 0x18f95cu;
    // NOP
label_18f960:
    // 0x18f960: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x18f960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x18f964: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18F964u;
    {
        const bool branch_taken_0x18f964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f964) {
            ctx->pc = 0x18FA30u;
            goto label_18fa30;
        }
    }
    ctx->pc = 0x18F96Cu;
    // 0x18f96c: 0x938289b4  lbu         $v0, -0x764C($gp)
    ctx->pc = 0x18f96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x18f970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F970u;
    {
        const bool branch_taken_0x18f970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f970) {
            ctx->pc = 0x18F980u;
            goto label_18f980;
        }
    }
    ctx->pc = 0x18F978u;
    // 0x18f978: 0xc0acb4c  jal         func_2B2D30
    ctx->pc = 0x18F978u;
    SET_GPR_U32(ctx, 31, 0x18F980u);
    ctx->pc = 0x2B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D30u, 0x18F978u, 0x18F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F980u;
label_18f980:
    // 0x18f980: 0x938289b8  lbu         $v0, -0x7648($gp)
    ctx->pc = 0x18f980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x18f984: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x18F984u;
    {
        const bool branch_taken_0x18f984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F984u;
        // 0x18f988: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f984) {
            ctx->pc = 0x18FA30u;
            goto label_18fa30;
        }
    }
    ctx->pc = 0x18F98Cu;
    // 0x18f98c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x18f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x18f990: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x18f990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x18f994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f99c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x18f99cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f9a0: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x18F9A0u;
    {
        const bool branch_taken_0x18f9a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9a0) {
            ctx->pc = 0x18F9D8u;
            goto label_18f9d8;
        }
    }
    ctx->pc = 0x18F9A8u;
    // 0x18f9a8: 0x8e852ab4  lw          $a1, 0x2AB4($s4)
    ctx->pc = 0x18f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10932)));
    // 0x18f9ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F9ACu;
    {
        const bool branch_taken_0x18f9ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9ACu;
        // 0x18f9b0: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9ac) {
            ctx->pc = 0x18F9C0u;
            goto label_18f9c0;
        }
    }
    ctx->pc = 0x18F9B4u;
    // 0x18f9b4: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x18F9B4u;
    SET_GPR_U32(ctx, 31, 0x18F9BCu);
    ctx->pc = 0x18F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9B4u;
    // 0x18f9b8: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x18F9B4u, 0x18F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9BCu;
label_18f9bc:
    // 0x18f9bc: 0x0  nop
    ctx->pc = 0x18f9bcu;
    // NOP
label_18f9c0:
    // 0x18f9c0: 0x8e852ab8  lw          $a1, 0x2AB8($s4)
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10936)));
    // 0x18f9c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F9C4u;
    {
        const bool branch_taken_0x18f9c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9C4u;
        // 0x18f9c8: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9c4) {
            ctx->pc = 0x18F9D8u;
            goto label_18f9d8;
        }
    }
    ctx->pc = 0x18F9CCu;
    // 0x18f9cc: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x18F9CCu;
    SET_GPR_U32(ctx, 31, 0x18F9D4u);
    ctx->pc = 0x18F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9CCu;
    // 0x18f9d0: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x18F9CCu, 0x18F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9D4u;
label_18f9d4:
    // 0x18f9d4: 0x0  nop
    ctx->pc = 0x18f9d4u;
    // NOP
label_18f9d8:
    // 0x18f9d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x18f9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x18f9dc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x18f9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x18f9e0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x18f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x18f9e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18f9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18f9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f9ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f9f0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x18f9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f9f4: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x18F9F4u;
    {
        const bool branch_taken_0x18f9f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9f4) {
            ctx->pc = 0x18FA28u;
            goto label_18fa28;
        }
    }
    ctx->pc = 0x18F9FCu;
    // 0x18f9fc: 0x8e852ab4  lw          $a1, 0x2AB4($s4)
    ctx->pc = 0x18f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10932)));
    // 0x18fa00: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FA00u;
    {
        const bool branch_taken_0x18fa00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA00u;
        // 0x18fa04: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa00) {
            ctx->pc = 0x18FA10u;
            goto label_18fa10;
        }
    }
    ctx->pc = 0x18FA08u;
    // 0x18fa08: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x18FA08u;
    SET_GPR_U32(ctx, 31, 0x18FA10u);
    ctx->pc = 0x18FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA08u;
    // 0x18fa0c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x18FA08u, 0x18FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA10u;
label_18fa10:
    // 0x18fa10: 0x8e852ab8  lw          $a1, 0x2AB8($s4)
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10936)));
    // 0x18fa14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FA14u;
    {
        const bool branch_taken_0x18fa14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA14u;
        // 0x18fa18: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa14) {
            ctx->pc = 0x18FA28u;
            goto label_18fa28;
        }
    }
    ctx->pc = 0x18FA1Cu;
    // 0x18fa1c: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x18FA1Cu;
    SET_GPR_U32(ctx, 31, 0x18FA24u);
    ctx->pc = 0x18FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA1Cu;
    // 0x18fa20: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x18FA1Cu, 0x18FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA24u;
label_18fa24:
    // 0x18fa24: 0x0  nop
    ctx->pc = 0x18fa24u;
    // NOP
label_18fa28:
    // 0x18fa28: 0xa38089b8  sb          $zero, -0x7648($gp)
    ctx->pc = 0x18fa28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937016), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fa2c: 0x0  nop
    ctx->pc = 0x18fa2cu;
    // NOP
label_18fa30:
    // 0x18fa30: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x18fa30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x18fa34: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18fa3c: 0xaf8286ec  sw          $v0, -0x7914($gp)
    ctx->pc = 0x18fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936300), GPR_U32(ctx, 2));
    // 0x18fa40: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x18fa40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18fa44: 0x8f8286ec  lw          $v0, -0x7914($gp)
    ctx->pc = 0x18fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x18fa48: 0xe4393060  swc1        $f25, 0x3060($at)
    ctx->pc = 0x18fa48u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843060u, _value); } while (0); }
    // 0x18fa4c: 0xaf8486f0  sw          $a0, -0x7910($gp)
    ctx->pc = 0x18fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U32(ctx, 4));
    // 0x18fa50: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa54: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fa58: 0xe4383064  swc1        $f24, 0x3064($at)
    ctx->pc = 0x18fa58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843064u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843064u, _value); } while (0); }
    // 0x18fa5c: 0xaf9186d4  sw          $s1, -0x792C($gp)
    ctx->pc = 0x18fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936276), GPR_U32(ctx, 17));
    // 0x18fa60: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa64: 0xa39086d8  sb          $s0, -0x7928($gp)
    ctx->pc = 0x18fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936280), (uint8_t)GPR_U32(ctx, 16));
    // 0x18fa68: 0xe4373068  swc1        $f23, 0x3068($at)
    ctx->pc = 0x18fa68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843068u, _value); } while (0); }
    // 0x18fa6c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa70: 0xe4363070  swc1        $f22, 0x3070($at)
    ctx->pc = 0x18fa70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843070u, _value); } while (0); }
    // 0x18fa74: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa78: 0xe4353074  swc1        $f21, 0x3074($at)
    ctx->pc = 0x18fa78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843074u, _value); } while (0); }
    // 0x18fa7c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa80: 0xe4343078  swc1        $f20, 0x3078($at)
    ctx->pc = 0x18fa80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843078u, _value); } while (0); }
    // 0x18fa84: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa88: 0xac23306c  sw          $v1, 0x306C($at)
    ctx->pc = 0x18fa88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x84306Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x84306Cu, _value); } while (0);
    // 0x18fa8c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fa90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18FA90u;
    {
        const bool branch_taken_0x18fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA90u;
        // 0x18fa94: 0xac23307c  sw          $v1, 0x307C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 12412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa90) {
            ctx->pc = 0x18FAE8u;
            goto label_18fae8;
        }
    }
    ctx->pc = 0x18FA98u;
    // 0x18fa98: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x18fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x18fa9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18fa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18faa0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x18FAA0u;
    SET_GPR_U32(ctx, 31, 0x18FAA8u);
    ctx->pc = 0x18FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAA0u;
    // 0x18faa4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x18FAA0u, 0x18FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FAA8u;
label_18faa8:
    // 0x18faa8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18FAA8u;
    {
        const bool branch_taken_0x18faa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18faa8) {
            ctx->pc = 0x18FAE8u;
            goto label_18fae8;
        }
    }
    ctx->pc = 0x18FAB0u;
    // 0x18fab0: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x18fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18fab4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FAB4u;
    {
        const bool branch_taken_0x18fab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fab4) {
            ctx->pc = 0x18FAD8u;
            goto label_18fad8;
        }
    }
    ctx->pc = 0x18FABCu;
    // 0x18fabc: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x18fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x18fac0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x18fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x18fac4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18facc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18faccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fad0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FAD0u;
    {
        const bool branch_taken_0x18fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAD0u;
        // 0x18fad4: 0x7c223070  sq          $v0, 0x3070($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 12400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fad0) {
            ctx->pc = 0x18FAE8u;
            goto label_18fae8;
        }
    }
    ctx->pc = 0x18FAD8u;
label_18fad8:
    // 0x18fad8: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x18fad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18fadc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fae0: 0x7c223070  sq          $v0, 0x3070($at)
    ctx->pc = 0x18fae0u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x843070u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x843070u, _value); } while (0);
    // 0x18fae4: 0x0  nop
    ctx->pc = 0x18fae4u;
    // NOP
label_18fae8:
    // 0x18fae8: 0x8f8286ec  lw          $v0, -0x7914($gp)
    ctx->pc = 0x18fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x18faec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18faf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FAF0u;
    {
        const bool branch_taken_0x18faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAF0u;
        // 0x18faf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18faf0) {
            ctx->pc = 0x18FB08u;
            goto label_18fb08;
        }
    }
    ctx->pc = 0x18FAF8u;
    // 0x18faf8: 0xc063d98  jal         func_18F660
    ctx->pc = 0x18FAF8u;
    SET_GPR_U32(ctx, 31, 0x18FB00u);
    ctx->pc = 0x18F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F660u, 0x18FAF8u, 0x18FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB00u;
label_18fb00:
    // 0x18fb00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18FB00u;
    {
        const bool branch_taken_0x18fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb00) {
            ctx->pc = 0x18FB10u;
            goto label_18fb10;
        }
    }
    ctx->pc = 0x18FB08u;
label_18fb08:
    // 0x18fb08: 0xc063d98  jal         func_18F660
    ctx->pc = 0x18FB08u;
    SET_GPR_U32(ctx, 31, 0x18FB10u);
    ctx->pc = 0x18FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB08u;
    // 0x18fb0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F660u, 0x18FB08u, 0x18FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB10u;
label_18fb10:
    // 0x18fb10: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fb14: 0x78233060  lq          $v1, 0x3060($at)
    ctx->pc = 0x18fb14u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x843060u));
    // 0x18fb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fb1c: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x18fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x18fb20: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x18fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x18fb24: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x18fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fb28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18fb2c: 0x24a53050  addiu       $a1, $a1, 0x3050
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x18fb30: 0x24c63040  addiu       $a2, $a2, 0x3040
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12352));
    // 0x18fb34: 0xaf9386e4  sw          $s3, -0x791C($gp)
    ctx->pc = 0x18fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 19));
    // 0x18fb38: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fb3c: 0x78223070  lq          $v0, 0x3070($at)
    ctx->pc = 0x18fb3cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x843070u));
    // 0x18fb40: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fb44: 0x7c233040  sq          $v1, 0x3040($at)
    ctx->pc = 0x18fb44u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x843040u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x843040u, _value); } while (0);
    // 0x18fb48: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fb4c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x18FB4Cu;
    SET_GPR_U32(ctx, 31, 0x18FB54u);
    ctx->pc = 0x18FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB4Cu;
    // 0x18fb50: 0x7c223050  sq          $v0, 0x3050($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 12368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x18FB4Cu, 0x18FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB54u;
label_18fb54:
    // 0x18fb54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18fb58: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18FB58u;
    SET_GPR_U32(ctx, 31, 0x18FB60u);
    ctx->pc = 0x18FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB58u;
    // 0x18fb5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18FB58u, 0x18FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB60u;
label_18fb60:
    // 0x18fb60: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18fb64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18fb68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18fb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18fb6c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x18FB6Cu;
    SET_GPR_U32(ctx, 31, 0x18FB74u);
    ctx->pc = 0x18FB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB6Cu;
    // 0x18fb70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x18FB6Cu, 0x18FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB74u;
label_18fb74:
    // 0x18fb74: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18fb78: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x18fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x18fb7c: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x18fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x18fb80: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18fb84: 0xc0414ca  jal         func_105328
    ctx->pc = 0x18FB84u;
    SET_GPR_U32(ctx, 31, 0x18FB8Cu);
    ctx->pc = 0x18FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB84u;
    // 0x18fb88: 0x24c63040  addiu       $a2, $a2, 0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x18FB84u, 0x18FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB8Cu;
label_18fb8c:
    // 0x18fb8c: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x18fb8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x18fb90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fb94: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FB94u;
    {
        const bool branch_taken_0x18fb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB94u;
        // 0x18fb98: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb94) {
            ctx->pc = 0x18FBB0u;
            goto label_18fbb0;
        }
    }
    ctx->pc = 0x18FB9Cu;
    // 0x18fb9c: 0xc063f14  jal         func_18FC50
    ctx->pc = 0x18FB9Cu;
    SET_GPR_U32(ctx, 31, 0x18FBA4u);
    ctx->pc = 0x18FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB9Cu;
    // 0x18fba0: 0x2484fde0  addiu       $a0, $a0, -0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC50u, 0x18FB9Cu, 0x18FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FBA4u;
label_18fba4:
    // 0x18fba4: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x18FBA4u;
    SET_GPR_U32(ctx, 31, 0x18FBACu);
    ctx->pc = 0x18FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBA4u;
    // 0x18fba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x18FBA4u, 0x18FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FBACu;
label_18fbac:
    // 0x18fbac: 0xaf8086e4  sw          $zero, -0x791C($gp)
    ctx->pc = 0x18fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 0));
label_18fbb0:
    // 0x18fbb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18fbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18fbb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18fbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18fbb8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x18fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x18fbbc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18fbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fbc0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18fbc4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18fbc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fbc8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18fbcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18fbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fbd0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18fbd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18fbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fbd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18fbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18fbdc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x18FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBE0u;
        // 0x18fbe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FBE8u;
}
