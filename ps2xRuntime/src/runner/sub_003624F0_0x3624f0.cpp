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

// Function: sub_003624F0
// Address: 0x3624f0 - 0x36263c
void sub_003624F0_0x3624f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003624F0_0x3624f0");
#endif

    switch (ctx->pc) {
        case 0x362550u: goto label_362550;
        case 0x362578u: goto label_362578;
        case 0x3625b4u: goto label_3625b4;
        case 0x3625e0u: goto label_3625e0;
        case 0x3625fcu: goto label_3625fc;
        default: break;
    }

    ctx->pc = 0x3624f0u;

    // 0x3624f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3624f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3624f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3624f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3624f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3624f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3624fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3624fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x362500: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x362500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362504: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x362504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x362508: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x362508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36250c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x362510: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x362510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362514: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362518: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x362518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36251c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362520: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x362520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362524: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x362524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36252c: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x36252cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x362530: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x362530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x362534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x362538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36253c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36253cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362540: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x362540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x362544: 0x25082480  addiu       $t0, $t0, 0x2480
    ctx->pc = 0x362544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9344));
    // 0x362548: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x362548u;
    SET_GPR_U32(ctx, 31, 0x362550u);
    ctx->pc = 0x36254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362548u;
    // 0x36254c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x362548u, 0x362550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362550u;
label_362550:
    // 0x362550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x362550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362554: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x362554u;
    {
        const bool branch_taken_0x362554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x362558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362554u;
        // 0x362558: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362554) {
            ctx->pc = 0x362608u;
            goto label_362608;
        }
    }
    ctx->pc = 0x36255Cu;
    // 0x36255c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x36255cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362560: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x362560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362564: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x362564u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36256c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x36256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x362570: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x362570u;
    SET_GPR_U32(ctx, 31, 0x362578u);
    ctx->pc = 0x362574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362570u;
    // 0x362574: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x362570u, 0x362578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362578u;
label_362578:
    // 0x362578: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x362578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x36257c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36257cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x362580: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x362580u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362584: 0x2442faf8  addiu       $v0, $v0, -0x508
    ctx->pc = 0x362584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966008));
    // 0x362588: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x362588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36258c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x36258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x362590: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x362590u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x362594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362598: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x362598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x36259c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625a0: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3625a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3625a4: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3625a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3625a8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3625a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3625ac: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3625ACu;
    SET_GPR_U32(ctx, 31, 0x3625B4u);
    ctx->pc = 0x3625B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625ACu;
    // 0x3625b0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3625ACu, 0x3625B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625B4u;
label_3625b4:
    // 0x3625b4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3625b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3625b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3625b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3625bc: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3625bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3625c0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3625c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3625c4: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x3625c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x3625c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3625c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625cc: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x3625ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3625d0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3625d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3625d4: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3625d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3625d8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3625D8u;
    SET_GPR_U32(ctx, 31, 0x3625E0u);
    ctx->pc = 0x3625DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625D8u;
    // 0x3625dc: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3625D8u, 0x3625E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625E0u;
label_3625e0:
    // 0x3625e0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3625e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3625e4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3625e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3625e8: 0x2442fafc  addiu       $v0, $v0, -0x504
    ctx->pc = 0x3625e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966012));
    // 0x3625ec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3625ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3625f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3625f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3625f4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3625F4u;
    SET_GPR_U32(ctx, 31, 0x3625FCu);
    ctx->pc = 0x3625F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625F4u;
    // 0x3625f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3625F4u, 0x3625FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625FCu;
label_3625fc:
    // 0x3625fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3625FCu;
    {
        const bool branch_taken_0x3625fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3625FCu;
        // 0x362600: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3625fc) {
            ctx->pc = 0x362610u;
            goto label_362610;
        }
    }
    ctx->pc = 0x362604u;
    // 0x362604: 0x0  nop
    ctx->pc = 0x362604u;
    // NOP
label_362608:
    // 0x362608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36260c: 0x0  nop
    ctx->pc = 0x36260cu;
    // NOP
label_362610:
    // 0x362610: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x362610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x362614: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x362614u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x362618: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x362618u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36261c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36261cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362620: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x362620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362624: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x362624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x362628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36262c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36262cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362634: 0x3e00008  jr          $ra
    ctx->pc = 0x362634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362634u;
        // 0x362638: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36263Cu;
}
