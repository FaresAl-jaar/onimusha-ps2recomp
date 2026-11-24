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

// Function: sub_00193410
// Address: 0x193410 - 0x193668
void sub_00193410_0x193410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193410_0x193410");
#endif

    switch (ctx->pc) {
        case 0x1934b0u: goto label_1934b0;
        case 0x193500u: goto label_193500;
        case 0x193590u: goto label_193590;
        case 0x1935e8u: goto label_1935e8;
        case 0x193600u: goto label_193600;
        case 0x193610u: goto label_193610;
        case 0x193620u: goto label_193620;
        default: break;
    }

    ctx->pc = 0x193410u;

    // 0x193410: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x193414: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x193414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x193418: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x193418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19341c: 0x2463d7b0  addiu       $v1, $v1, -0x2850
    ctx->pc = 0x19341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956976));
    // 0x193420: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x193420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x193424: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x193424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x193428: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x193428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19342c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x19342cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193430: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x193430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x193434: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x193434u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193438: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x193438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19343c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19343cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193440: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x193440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x193444: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x193444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19344c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19344cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193450: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193454: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x193454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193458: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x193458u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19345c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193460: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x193460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193464: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x193464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193468: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x193468u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x19346c: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x19346Cu;
    {
        const bool branch_taken_0x19346c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19346Cu;
        // 0x193470: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19346c) {
            ctx->pc = 0x193638u;
            goto label_193638;
        }
    }
    ctx->pc = 0x193474u;
    // 0x193474: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x193474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x193478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x193478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19347c: 0x248457d0  addiu       $a0, $a0, 0x57D0
    ctx->pc = 0x19347cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22480));
    // 0x193480: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193484: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193488: 0x600008  jr          $v1
    ctx->pc = 0x193488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193490u: goto label_193490;
            case 0x193508u: goto label_193508;
            case 0x193520u: goto label_193520;
            case 0x193530u: goto label_193530;
            case 0x193548u: goto label_193548;
            case 0x193560u: goto label_193560;
            case 0x193628u: goto label_193628;
            case 0x193638u: goto label_193638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193490u;
label_193490:
    // 0x193490: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x193490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193494: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x193494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x193498: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x193498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19349c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1934a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1934a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1934a4: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1934a8: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1934A8u;
    SET_GPR_U32(ctx, 31, 0x1934B0u);
    ctx->pc = 0x1934ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934A8u;
    // 0x1934ac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x1934A8u, 0x1934B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1934B0u;
label_1934b0:
    // 0x1934b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1934b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1934b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1934b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1934b8: 0x0  nop
    ctx->pc = 0x1934b8u;
    // NOP
    // 0x1934bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1934bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1934C0u;
    {
        const bool branch_taken_0x1934c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934c0) {
            ctx->pc = 0x1934E0u;
            goto label_1934e0;
        }
    }
    ctx->pc = 0x1934C8u;
    // 0x1934c8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1934cc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1934ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1934d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1934d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1934d4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1934d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1934d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1934D8u;
    {
        const bool branch_taken_0x1934d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1934DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934D8u;
        // 0x1934dc: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934d8) {
            ctx->pc = 0x193638u;
            goto label_193638;
        }
    }
    ctx->pc = 0x1934E0u;
label_1934e0:
    // 0x1934e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1934e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1934e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1934e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1934ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934f0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1934f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1934f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1934f8: 0xc064ec0  jal         func_193B00
    ctx->pc = 0x1934F8u;
    SET_GPR_U32(ctx, 31, 0x193500u);
    ctx->pc = 0x1934FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934F8u;
    // 0x1934fc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B00u, 0x1934F8u, 0x193500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193500u;
label_193500:
    // 0x193500: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x193500u;
    {
        const bool branch_taken_0x193500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193500) {
            ctx->pc = 0x193638u;
            goto label_193638;
        }
    }
    ctx->pc = 0x193508u;
label_193508:
    // 0x193508: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x193508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x19350c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19350cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x193510: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193514: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x193514u;
    {
        const bool branch_taken_0x193514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193514) {
            ctx->pc = 0x193570u;
            goto label_193570;
        }
    }
    ctx->pc = 0x19351Cu;
    // 0x19351c: 0x0  nop
    ctx->pc = 0x19351cu;
    // NOP
label_193520:
    // 0x193520: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x193524: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193528: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x193528u;
    {
        const bool branch_taken_0x193528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193528) {
            ctx->pc = 0x193570u;
            goto label_193570;
        }
    }
    ctx->pc = 0x193530u;
label_193530:
    // 0x193530: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x193534: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x193534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x193538: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19353c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19353Cu;
    {
        const bool branch_taken_0x19353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19353c) {
            ctx->pc = 0x193570u;
            goto label_193570;
        }
    }
    ctx->pc = 0x193544u;
    // 0x193544: 0x0  nop
    ctx->pc = 0x193544u;
    // NOP
label_193548:
    // 0x193548: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x193548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x19354c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x193550: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x193554u;
    {
        const bool branch_taken_0x193554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193554) {
            ctx->pc = 0x193570u;
            goto label_193570;
        }
    }
    ctx->pc = 0x19355Cu;
    // 0x19355c: 0x0  nop
    ctx->pc = 0x19355cu;
    // NOP
label_193560:
    // 0x193560: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x193560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x193564: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x193568: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x193568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19356c: 0x0  nop
    ctx->pc = 0x19356cu;
    // NOP
label_193570:
    // 0x193570: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x193570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193574: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x193574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x193578: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19357c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193580: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193584: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x193584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x193588: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x193588u;
    SET_GPR_U32(ctx, 31, 0x193590u);
    ctx->pc = 0x19358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193588u;
    // 0x19358c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x193588u, 0x193590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193590u;
label_193590:
    // 0x193590: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x193594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193598: 0x0  nop
    ctx->pc = 0x193598u;
    // NOP
    // 0x19359c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19359cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1935a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1935A0u;
    {
        const bool branch_taken_0x1935a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1935a0) {
            ctx->pc = 0x1935C8u;
            goto label_1935c8;
        }
    }
    ctx->pc = 0x1935A8u;
    // 0x1935a8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1935a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1935ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1935acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935b0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1935b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1935b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1935b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1935b8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1935b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1935bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1935BCu;
    {
        const bool branch_taken_0x1935bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1935C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935BCu;
        // 0x1935c0: 0x7e040000  sq          $a0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935bc) {
            ctx->pc = 0x193638u;
            goto label_193638;
        }
    }
    ctx->pc = 0x1935C4u;
    // 0x1935c4: 0x0  nop
    ctx->pc = 0x1935c4u;
    // NOP
label_1935c8:
    // 0x1935c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1935c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1935ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935d0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1935d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1935d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1935d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1935dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1935e0: 0xc064ec0  jal         func_193B00
    ctx->pc = 0x1935E0u;
    SET_GPR_U32(ctx, 31, 0x1935E8u);
    ctx->pc = 0x1935E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935E0u;
    // 0x1935e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B00u, 0x1935E0u, 0x1935E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935E8u;
label_1935e8:
    // 0x1935e8: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1935e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1935ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1935ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935f0: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x1935f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1935f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1935f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1935f8: 0xc065120  jal         func_194480
    ctx->pc = 0x1935F8u;
    SET_GPR_U32(ctx, 31, 0x193600u);
    ctx->pc = 0x1935FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935F8u;
    // 0x1935fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x194480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194480u, 0x1935F8u, 0x193600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193600u;
label_193600:
    // 0x193600: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x193600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x193604: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x193604u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193608: 0xc0414dc  jal         func_105370
    ctx->pc = 0x193608u;
    SET_GPR_U32(ctx, 31, 0x193610u);
    ctx->pc = 0x19360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193608u;
    // 0x19360c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x193608u, 0x193610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193610u;
label_193610:
    // 0x193610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x193614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193618: 0xc0414ca  jal         func_105328
    ctx->pc = 0x193618u;
    SET_GPR_U32(ctx, 31, 0x193620u);
    ctx->pc = 0x19361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193618u;
    // 0x19361c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x193618u, 0x193620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193620u;
label_193620:
    // 0x193620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x193620u;
    {
        const bool branch_taken_0x193620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193620) {
            ctx->pc = 0x193638u;
            goto label_193638;
        }
    }
    ctx->pc = 0x193628u;
label_193628:
    // 0x193628: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x193628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x19362c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19362cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193630: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x193630u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193634: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x193634u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
label_193638:
    // 0x193638: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x193638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19363c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19363cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193640: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x193640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x193644: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x193644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193648: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x193648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19364c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19364cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193650: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x193650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193654: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x193654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193658: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x193658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19365c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19365cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193660: 0x3e00008  jr          $ra
    ctx->pc = 0x193660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193660u;
        // 0x193664: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193668u;
}
