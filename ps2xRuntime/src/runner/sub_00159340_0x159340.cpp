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

// Function: sub_00159340
// Address: 0x159340 - 0x159518
void sub_00159340_0x159340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159340_0x159340");
#endif

    switch (ctx->pc) {
        case 0x159384u: goto label_159384;
        case 0x159398u: goto label_159398;
        case 0x1593b8u: goto label_1593b8;
        case 0x1593c0u: goto label_1593c0;
        case 0x159448u: goto label_159448;
        case 0x159478u: goto label_159478;
        case 0x159480u: goto label_159480;
        case 0x1594acu: goto label_1594ac;
        case 0x1594e0u: goto label_1594e0;
        case 0x1594e8u: goto label_1594e8;
        default: break;
    }

    ctx->pc = 0x159340u;

    // 0x159340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159344: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x159344u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x159348: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15934c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x159350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159354: 0x2442f120  addiu       $v0, $v0, -0xEE0
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
    // 0x159358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15935c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x159360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159368: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x159368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15936c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15936cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159370: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x159374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15937c: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x15937Cu;
    SET_GPR_U32(ctx, 31, 0x159384u);
    ctx->pc = 0x159380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15937Cu;
    // 0x159380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x15937Cu, 0x159384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159384u;
label_159384:
    // 0x159384: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x159384u;
    {
        const bool branch_taken_0x159384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159384u;
        // 0x159388: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159384) {
            ctx->pc = 0x1593E0u;
            goto label_1593e0;
        }
    }
    ctx->pc = 0x15938Cu;
    // 0x15938c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159390: 0xc04c884  jal         func_132210
    ctx->pc = 0x159390u;
    SET_GPR_U32(ctx, 31, 0x159398u);
    ctx->pc = 0x159394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159390u;
    // 0x159394: 0x24846700  addiu       $a0, $a0, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132210u, 0x159390u, 0x159398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159398u;
label_159398:
    // 0x159398: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15939c: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x15939cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1593a0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1593a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1593a4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1593A4u;
    {
        const bool branch_taken_0x1593a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1593A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A4u;
        // 0x1593a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a4) {
            ctx->pc = 0x1593D8u;
            goto label_1593d8;
        }
    }
    ctx->pc = 0x1593ACu;
    // 0x1593ac: 0x3c100081  lui         $s0, 0x81
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)129 << 16));
    // 0x1593b0: 0x261095a0  addiu       $s0, $s0, -0x6A60
    ctx->pc = 0x1593b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940064));
    // 0x1593b4: 0x0  nop
    ctx->pc = 0x1593b4u;
    // NOP
label_1593b8:
    // 0x1593b8: 0xc059cd0  jal         func_167340
    ctx->pc = 0x1593B8u;
    SET_GPR_U32(ctx, 31, 0x1593C0u);
    ctx->pc = 0x1593BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593B8u;
    // 0x1593bc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167340u, 0x1593B8u, 0x1593C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593C0u;
label_1593c0:
    // 0x1593c0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1593c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1593c8: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x1593c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1593cc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1593ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1593d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1593D0u;
    {
        const bool branch_taken_0x1593d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593D0u;
        // 0x1593d4: 0x261022b0  addiu       $s0, $s0, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593d0) {
            ctx->pc = 0x1593B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1593b8;
        }
    }
    ctx->pc = 0x1593D8u;
label_1593d8:
    // 0x1593d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1593D8u;
    {
        const bool branch_taken_0x1593d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1593d8) {
            ctx->pc = 0x159500u;
            goto label_159500;
        }
    }
    ctx->pc = 0x1593E0u;
label_1593e0:
    // 0x1593e0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1593E0u;
    {
        const bool branch_taken_0x1593e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1593E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E0u;
        // 0x1593e4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593e0) {
            ctx->pc = 0x1594A0u;
            goto label_1594a0;
        }
    }
    ctx->pc = 0x1593E8u;
    // 0x1593e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1593e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1593ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1593ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1593f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1593f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1593f8: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1593F8u;
    {
        const bool branch_taken_0x1593f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1593f8) {
            ctx->pc = 0x1594A0u;
            goto label_1594a0;
        }
    }
    ctx->pc = 0x159400u;
    // 0x159400: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x159400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159404: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x159404u;
    {
        const bool branch_taken_0x159404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159404) {
            ctx->pc = 0x1594A0u;
            goto label_1594a0;
        }
    }
    ctx->pc = 0x15940Cu;
    // 0x15940c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x15940cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x159410: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x159414: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x159414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x159418: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x159418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x15941c: 0x920a0001  lbu         $t2, 0x1($s0)
    ctx->pc = 0x15941cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x159420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159424: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x159424u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159428: 0x92070005  lbu         $a3, 0x5($s0)
    ctx->pc = 0x159428u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x15942c: 0x92080006  lbu         $t0, 0x6($s0)
    ctx->pc = 0x15942cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x159430: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x159434: 0x92090007  lbu         $t1, 0x7($s0)
    ctx->pc = 0x159434u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x159438: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x159438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x15943c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x159440: 0xc052324  jal         func_148C90
    ctx->pc = 0x159440u;
    SET_GPR_U32(ctx, 31, 0x159448u);
    ctx->pc = 0x159444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159440u;
    // 0x159444: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148C90u, 0x159440u, 0x159448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159448u;
label_159448:
    // 0x159448: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15944c: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x15944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x159450: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x159450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159454: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x159454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x159458: 0xe420f9a8  swc1        $f0, -0x658($at)
    ctx->pc = 0x159458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6AF9A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6AF9A8u, _value); } while (0); }
    // 0x15945c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x15945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x159460: 0xac31f9a0  sw          $s1, -0x660($at)
    ctx->pc = 0x159460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6AF9A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6AF9A0u, _value); } while (0);
    // 0x159464: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x159464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x159468: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x159468u;
    {
        const bool branch_taken_0x159468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159468u;
        // 0x15946c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159468) {
            ctx->pc = 0x159498u;
            goto label_159498;
        }
    }
    ctx->pc = 0x159470u;
    // 0x159470: 0x3c100081  lui         $s0, 0x81
    ctx->pc = 0x159470u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)129 << 16));
    // 0x159474: 0x261095a0  addiu       $s0, $s0, -0x6A60
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940064));
label_159478:
    // 0x159478: 0xc059cd0  jal         func_167340
    ctx->pc = 0x159478u;
    SET_GPR_U32(ctx, 31, 0x159480u);
    ctx->pc = 0x15947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159478u;
    // 0x15947c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167340u, 0x159478u, 0x159480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159480u;
label_159480:
    // 0x159480: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159484: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x159484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x159488: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x159488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x15948c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15948cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x159490: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x159490u;
    {
        const bool branch_taken_0x159490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159490u;
        // 0x159494: 0x261022b0  addiu       $s0, $s0, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159490) {
            ctx->pc = 0x159478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159478;
        }
    }
    ctx->pc = 0x159498u;
label_159498:
    // 0x159498: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x159498u;
    {
        const bool branch_taken_0x159498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159498) {
            ctx->pc = 0x159500u;
            goto label_159500;
        }
    }
    ctx->pc = 0x1594A0u;
label_1594a0:
    // 0x1594a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1594a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1594a4: 0xc052330  jal         func_148CC0
    ctx->pc = 0x1594A4u;
    SET_GPR_U32(ctx, 31, 0x1594ACu);
    ctx->pc = 0x1594A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594A4u;
    // 0x1594a8: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148CC0u, 0x1594A4u, 0x1594ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594ACu;
label_1594ac:
    // 0x1594ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x1594acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x1594b0: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x1594b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x1594b4: 0xac20f9a0  sw          $zero, -0x660($at)
    ctx->pc = 0x1594b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6AF9A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6AF9A0u, _value); } while (0);
    // 0x1594b8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x1594b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x1594bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x1594bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x1594c0: 0xac23f9a8  sw          $v1, -0x658($at)
    ctx->pc = 0x1594c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6AF9A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6AF9A8u, _value); } while (0);
    // 0x1594c4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1594c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1594c8: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x1594c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1594cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1594ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1594d0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1594D0u;
    {
        const bool branch_taken_0x1594d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594D0u;
        // 0x1594d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594d0) {
            ctx->pc = 0x159500u;
            goto label_159500;
        }
    }
    ctx->pc = 0x1594D8u;
    // 0x1594d8: 0x3c110081  lui         $s1, 0x81
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)129 << 16));
    // 0x1594dc: 0x263195a0  addiu       $s1, $s1, -0x6A60
    ctx->pc = 0x1594dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940064));
label_1594e0:
    // 0x1594e0: 0xc059cd0  jal         func_167340
    ctx->pc = 0x1594E0u;
    SET_GPR_U32(ctx, 31, 0x1594E8u);
    ctx->pc = 0x1594E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594E0u;
    // 0x1594e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167340u, 0x1594E0u, 0x1594E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594E8u;
label_1594e8:
    // 0x1594e8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1594e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1594ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1594f0: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x1594f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1594f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1594f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1594f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1594F8u;
    {
        const bool branch_taken_0x1594f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1594FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594F8u;
        // 0x1594fc: 0x263122b0  addiu       $s1, $s1, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594f8) {
            ctx->pc = 0x1594E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1594e0;
        }
    }
    ctx->pc = 0x159500u;
label_159500:
    // 0x159500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x159500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15950c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15950cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159510: 0x3e00008  jr          $ra
    ctx->pc = 0x159510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159510u;
        // 0x159514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159518u;
}
