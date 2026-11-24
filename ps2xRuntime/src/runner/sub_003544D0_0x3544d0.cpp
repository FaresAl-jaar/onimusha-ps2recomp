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

// Function: sub_003544D0
// Address: 0x3544d0 - 0x3546b8
void sub_003544D0_0x3544d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003544D0_0x3544d0");
#endif

    switch (ctx->pc) {
        case 0x354538u: goto label_354538;
        case 0x354560u: goto label_354560;
        case 0x3545a0u: goto label_3545a0;
        case 0x3545e8u: goto label_3545e8;
        case 0x3545f8u: goto label_3545f8;
        case 0x354604u: goto label_354604;
        case 0x354610u: goto label_354610;
        case 0x354658u: goto label_354658;
        case 0x354674u: goto label_354674;
        default: break;
    }

    ctx->pc = 0x3544d0u;

    // 0x3544d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3544d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3544d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3544d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3544d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3544d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3544dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3544dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3544e0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3544e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3544e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3544e8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3544e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3544ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3544f0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3544f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3544f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3544f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3544f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3544fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x354500: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x354500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x354504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x354508: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x354508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35450c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x354510: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x354510u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x354514: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x354514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354518: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x354518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35451c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354528: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x354528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x35452c: 0x25084460  addiu       $t0, $t0, 0x4460
    ctx->pc = 0x35452cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17504));
    // 0x354530: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x354530u;
    SET_GPR_U32(ctx, 31, 0x354538u);
    ctx->pc = 0x354534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354530u;
    // 0x354534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x354530u, 0x354538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354538u;
label_354538:
    // 0x354538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x354538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35453c: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x35453Cu;
    {
        const bool branch_taken_0x35453c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35453Cu;
        // 0x354540: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35453c) {
            ctx->pc = 0x354680u;
            goto label_354680;
        }
    }
    ctx->pc = 0x354544u;
    // 0x354544: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x354544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354548: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x354548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35454c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x35454cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354554: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x354554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354558: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x354558u;
    SET_GPR_U32(ctx, 31, 0x354560u);
    ctx->pc = 0x35455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354558u;
    // 0x35455c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x354558u, 0x354560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354560u;
label_354560:
    // 0x354560: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354564: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x354564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x354568: 0x3a0c0  sll         $s4, $v1, 3
    ctx->pc = 0x354568u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35456c: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x35456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x354570: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x354570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x354574: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x354574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x354578: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x354578u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35457c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x354580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354584: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x354584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x354588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35458c: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x35458cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x354590: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x354590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x354594: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x354594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x354598: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x354598u;
    SET_GPR_U32(ctx, 31, 0x3545A0u);
    ctx->pc = 0x35459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354598u;
    // 0x35459c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x354598u, 0x3545A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545A0u;
label_3545a0:
    // 0x3545a0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3545a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3545a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3545a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3545a8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3545a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3545ac: 0xa21e0558  sb          $fp, 0x558($s0)
    ctx->pc = 0x3545acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 30));
    // 0x3545b0: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x3545B0u;
    {
        const bool branch_taken_0x3545b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3545B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545B0u;
        // 0x3545b4: 0xa2110559  sb          $s1, 0x559($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3545b0) {
            ctx->pc = 0x354640u;
            goto label_354640;
        }
    }
    ctx->pc = 0x3545B8u;
    // 0x3545b8: 0x92620733  lbu         $v0, 0x733($s3)
    ctx->pc = 0x3545b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1843)));
    // 0x3545bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3545bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3545c0: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x3545c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3545c4: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x3545c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3545c8: 0x90650730  lbu         $a1, 0x730($v1)
    ctx->pc = 0x3545c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x3545cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3545ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3545d0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3545d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3545d4: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x3545d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x3545d8: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x3545d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x3545dc: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3545dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3545e0: 0xc041442  jal         func_105108
    ctx->pc = 0x3545E0u;
    SET_GPR_U32(ctx, 31, 0x3545E8u);
    ctx->pc = 0x3545E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545E0u;
    // 0x3545e4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3545E0u, 0x3545E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545E8u;
label_3545e8:
    // 0x3545e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3545e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3545ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3545ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3545f0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3545F0u;
    SET_GPR_U32(ctx, 31, 0x3545F8u);
    ctx->pc = 0x3545F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545F0u;
    // 0x3545f4: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3545F0u, 0x3545F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545F8u;
label_3545f8:
    // 0x3545f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3545f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3545fc: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3545FCu;
    SET_GPR_U32(ctx, 31, 0x354604u);
    ctx->pc = 0x354600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545FCu;
    // 0x354600: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3545FCu, 0x354604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354604u;
label_354604:
    // 0x354604: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x354604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x354608: 0xc076654  jal         func_1D9950
    ctx->pc = 0x354608u;
    SET_GPR_U32(ctx, 31, 0x354610u);
    ctx->pc = 0x35460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354608u;
    // 0x35460c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x354608u, 0x354610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354610u;
label_354610:
    // 0x354610: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x354610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354614: 0x0  nop
    ctx->pc = 0x354614u;
    // NOP
    // 0x354618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x354618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35461c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x35461Cu;
    {
        const bool branch_taken_0x35461c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35461c) {
            ctx->pc = 0x354630u;
            goto label_354630;
        }
    }
    ctx->pc = 0x354624u;
    // 0x354624: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x354624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x354628: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354628u;
    {
        const bool branch_taken_0x354628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354628u;
        // 0x35462c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354628) {
            ctx->pc = 0x354648u;
            goto label_354648;
        }
    }
    ctx->pc = 0x354630u;
label_354630:
    // 0x354630: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x354630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354634u;
    {
        const bool branch_taken_0x354634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354634u;
        // 0x354638: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354634) {
            ctx->pc = 0x354648u;
            goto label_354648;
        }
    }
    ctx->pc = 0x35463Cu;
    // 0x35463c: 0x0  nop
    ctx->pc = 0x35463cu;
    // NOP
label_354640:
    // 0x354640: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x354640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354644: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x354644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_354648:
    // 0x354648: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x354648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35464c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354650: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x354650u;
    SET_GPR_U32(ctx, 31, 0x354658u);
    ctx->pc = 0x354654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354650u;
    // 0x354654: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x354650u, 0x354658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354658u;
label_354658:
    // 0x354658: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x354658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x35465c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x35465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354660: 0x2442f904  addiu       $v0, $v0, -0x6FC
    ctx->pc = 0x354660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965508));
    // 0x354664: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x354664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x354668: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x354668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35466c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x35466Cu;
    SET_GPR_U32(ctx, 31, 0x354674u);
    ctx->pc = 0x354670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35466Cu;
    // 0x354670: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x35466Cu, 0x354674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354674u;
label_354674:
    // 0x354674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354674u;
    {
        const bool branch_taken_0x354674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354674u;
        // 0x354678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354674) {
            ctx->pc = 0x354688u;
            goto label_354688;
        }
    }
    ctx->pc = 0x35467Cu;
    // 0x35467c: 0x0  nop
    ctx->pc = 0x35467cu;
    // NOP
label_354680:
    // 0x354680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354684: 0x0  nop
    ctx->pc = 0x354684u;
    // NOP
label_354688:
    // 0x354688: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x354688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35468c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x35468cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x354690: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x354690u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x354694: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x354694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x354698: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x354698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35469c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35469cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3546a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3546a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3546a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3546a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3546a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3546a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3546ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3546acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3546b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3546B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3546B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546B0u;
        // 0x3546b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3546B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3546B8u;
}
