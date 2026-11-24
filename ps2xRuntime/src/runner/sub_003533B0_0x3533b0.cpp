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

// Function: sub_003533B0
// Address: 0x3533b0 - 0x35352c
void sub_003533B0_0x3533b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003533B0_0x3533b0");
#endif

    switch (ctx->pc) {
        case 0x353410u: goto label_353410;
        case 0x353438u: goto label_353438;
        case 0x353478u: goto label_353478;
        case 0x3534bcu: goto label_3534bc;
        case 0x3534f0u: goto label_3534f0;
        default: break;
    }

    ctx->pc = 0x3533b0u;

    // 0x3533b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3533b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3533b4: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3533b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3533b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3533bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3533bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3533c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3533c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3533c4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3533c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3533c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3533cc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3533ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3533d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3533d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3533d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3533d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3533dc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3533dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3533e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3533e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3533e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3533e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3533ec: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x3533ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x3533f0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3533f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533f4: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3533f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3533f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3533fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353404: 0x25083340  addiu       $t0, $t0, 0x3340
    ctx->pc = 0x353404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13120));
    // 0x353408: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x353408u;
    SET_GPR_U32(ctx, 31, 0x353410u);
    ctx->pc = 0x35340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353408u;
    // 0x35340c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x353408u, 0x353410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353410u;
label_353410:
    // 0x353410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353414: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x353414u;
    {
        const bool branch_taken_0x353414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353414u;
        // 0x353418: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353414) {
            ctx->pc = 0x3534F8u;
            goto label_3534f8;
        }
    }
    ctx->pc = 0x35341Cu;
    // 0x35341c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x35341cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353420: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x353420u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353428: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x353428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35342c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x35342cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x353430: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x353430u;
    SET_GPR_U32(ctx, 31, 0x353438u);
    ctx->pc = 0x353434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353430u;
    // 0x353434: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x353430u, 0x353438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353438u;
label_353438:
    // 0x353438: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35343c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353440: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x353440u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353444: 0x2442f8e8  addiu       $v0, $v0, -0x718
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965480));
    // 0x353448: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x353448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35344c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x35344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x353450: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353454: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x353458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35345c: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x35345cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x353460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353464: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x353464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x353468: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x353468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x35346c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x35346cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x353470: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x353470u;
    SET_GPR_U32(ctx, 31, 0x353478u);
    ctx->pc = 0x353474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353470u;
    // 0x353474: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x353470u, 0x353478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353478u;
label_353478:
    // 0x353478: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x353478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x35347c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x353480: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x353480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x353484: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x353484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x353488: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x353488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x35348c: 0x92820820  lbu         $v0, 0x820($s4)
    ctx->pc = 0x35348cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2080)));
    // 0x353490: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x353490u;
    {
        const bool branch_taken_0x353490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353490) {
            ctx->pc = 0x3534C8u;
            goto label_3534c8;
        }
    }
    ctx->pc = 0x353498u;
    // 0x353498: 0x7a830810  lq          $v1, 0x810($s4)
    ctx->pc = 0x353498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x35349c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3534a0: 0x2442f8ec  addiu       $v0, $v0, -0x714
    ctx->pc = 0x3534a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965484));
    // 0x3534a4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3534a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3534a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3534a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3534ac: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3534acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3534b0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3534b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3534b4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3534B4u;
    SET_GPR_U32(ctx, 31, 0x3534BCu);
    ctx->pc = 0x3534B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3534B4u;
    // 0x3534b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3534B4u, 0x3534BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3534BCu;
label_3534bc:
    // 0x3534bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3534BCu;
    {
        const bool branch_taken_0x3534bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3534bc) {
            ctx->pc = 0x3534F0u;
            goto label_3534f0;
        }
    }
    ctx->pc = 0x3534C4u;
    // 0x3534c4: 0x0  nop
    ctx->pc = 0x3534c4u;
    // NOP
label_3534c8:
    // 0x3534c8: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3534c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3534cc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3534ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3534d0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3534d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3534d4: 0x2442f8ec  addiu       $v0, $v0, -0x714
    ctx->pc = 0x3534d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965484));
    // 0x3534d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3534d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3534dc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3534dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3534e0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x3534e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x3534e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3534e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3534e8: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3534E8u;
    SET_GPR_U32(ctx, 31, 0x3534F0u);
    ctx->pc = 0x3534ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3534E8u;
    // 0x3534ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3534E8u, 0x3534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3534F0u;
label_3534f0:
    // 0x3534f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3534F0u;
    {
        const bool branch_taken_0x3534f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3534F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534F0u;
        // 0x3534f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3534f0) {
            ctx->pc = 0x353500u;
            goto label_353500;
        }
    }
    ctx->pc = 0x3534F8u;
label_3534f8:
    // 0x3534f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3534f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3534fc: 0x0  nop
    ctx->pc = 0x3534fcu;
    // NOP
label_353500:
    // 0x353500: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x353500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353504: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x353504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353508: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x353508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35350c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35350cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x353510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x353514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x353518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35351c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35351cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353524: 0x3e00008  jr          $ra
    ctx->pc = 0x353524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353524u;
        // 0x353528: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35352Cu;
}
