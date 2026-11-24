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

// Function: sub_0034C4E0
// Address: 0x34c4e0 - 0x34c730
void sub_0034C4E0_0x34c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C4E0_0x34c4e0");
#endif

    switch (ctx->pc) {
        case 0x34c548u: goto label_34c548;
        case 0x34c570u: goto label_34c570;
        case 0x34c59cu: goto label_34c59c;
        case 0x34c5e4u: goto label_34c5e4;
        case 0x34c5f4u: goto label_34c5f4;
        case 0x34c600u: goto label_34c600;
        case 0x34c60cu: goto label_34c60c;
        case 0x34c6e4u: goto label_34c6e4;
        default: break;
    }

    ctx->pc = 0x34c4e0u;

    // 0x34c4e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x34c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x34c4e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x34c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x34c4e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x34c4ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34c4f0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x34c4f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c4f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34c4f8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x34c4f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c4fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34c500: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34c500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c504: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34c508: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34c508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c50c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34c510: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x34c510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34c518: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x34c518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c520: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x34c520u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x34c524: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x34c524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c528: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x34c528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c52c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x34c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x34c530: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34c534: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34c534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c538: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x34c538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x34c53c: 0x2508c470  addiu       $t0, $t0, -0x3B90
    ctx->pc = 0x34c53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952048));
    // 0x34c540: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x34C540u;
    SET_GPR_U32(ctx, 31, 0x34C548u);
    ctx->pc = 0x34C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C540u;
    // 0x34c544: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x34C540u, 0x34C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C548u;
label_34c548:
    // 0x34c548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34c548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c54c: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x34C54Cu;
    {
        const bool branch_taken_0x34c54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C54Cu;
        // 0x34c550: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c54c) {
            ctx->pc = 0x34C6F8u;
            goto label_34c6f8;
        }
    }
    ctx->pc = 0x34C554u;
    // 0x34c554: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x34c554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c55c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c560: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x34c560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34c564: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x34c564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c568: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x34C568u;
    SET_GPR_U32(ctx, 31, 0x34C570u);
    ctx->pc = 0x34C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C568u;
    // 0x34c56c: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x34C568u, 0x34C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C570u;
label_34c570:
    // 0x34c570: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x34c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x34c574: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x34c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x34c578: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x34c578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x34c57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c580: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x34c580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x34c584: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34c588: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x34c588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x34c58c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c590: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x34c590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c594: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x34C594u;
    SET_GPR_U32(ctx, 31, 0x34C59Cu);
    ctx->pc = 0x34C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C594u;
    // 0x34c598: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x34C594u, 0x34C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C59Cu;
label_34c59c:
    // 0x34c59c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x34c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x34c5a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34c5a4: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x34c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x34c5a8: 0xa21e0558  sb          $fp, 0x558($s0)
    ctx->pc = 0x34c5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 30));
    // 0x34c5ac: 0x12800024  beqz        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x34C5ACu;
    {
        const bool branch_taken_0x34c5ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5ACu;
        // 0x34c5b0: 0xa2110559  sb          $s1, 0x559($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c5ac) {
            ctx->pc = 0x34C640u;
            goto label_34c640;
        }
    }
    ctx->pc = 0x34C5B4u;
    // 0x34c5b4: 0x92820733  lbu         $v0, 0x733($s4)
    ctx->pc = 0x34c5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1843)));
    // 0x34c5b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c5bc: 0x8e86004c  lw          $a2, 0x4C($s4)
    ctx->pc = 0x34c5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x34c5c0: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x34c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x34c5c4: 0x90650730  lbu         $a1, 0x730($v1)
    ctx->pc = 0x34c5c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x34c5c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34c5cc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x34c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x34c5d0: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x34c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x34c5d4: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x34c5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x34c5d8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x34c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x34c5dc: 0xc041442  jal         func_105108
    ctx->pc = 0x34C5DCu;
    SET_GPR_U32(ctx, 31, 0x34C5E4u);
    ctx->pc = 0x34C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5DCu;
    // 0x34c5e0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x34C5DCu, 0x34C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5E4u;
label_34c5e4:
    // 0x34c5e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x34c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34c5e8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34c5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c5ec: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x34C5ECu;
    SET_GPR_U32(ctx, 31, 0x34C5F4u);
    ctx->pc = 0x34C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5ECu;
    // 0x34c5f0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x34C5ECu, 0x34C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5F4u;
label_34c5f4:
    // 0x34c5f4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x34c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34c5f8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x34C5F8u;
    SET_GPR_U32(ctx, 31, 0x34C600u);
    ctx->pc = 0x34C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5F8u;
    // 0x34c5fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x34C5F8u, 0x34C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C600u;
label_34c600:
    // 0x34c600: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34c604: 0xc076654  jal         func_1D9950
    ctx->pc = 0x34C604u;
    SET_GPR_U32(ctx, 31, 0x34C60Cu);
    ctx->pc = 0x34C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C604u;
    // 0x34c608: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x34C604u, 0x34C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C60Cu;
label_34c60c:
    // 0x34c60c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34c60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c610: 0x0  nop
    ctx->pc = 0x34c610u;
    // NOP
    // 0x34c614: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34c614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c618: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34C618u;
    {
        const bool branch_taken_0x34c618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c618) {
            ctx->pc = 0x34C630u;
            goto label_34c630;
        }
    }
    ctx->pc = 0x34C620u;
    // 0x34c620: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x34c620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34c624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C624u;
    {
        const bool branch_taken_0x34c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C624u;
        // 0x34c628: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c624) {
            ctx->pc = 0x34C648u;
            goto label_34c648;
        }
    }
    ctx->pc = 0x34C62Cu;
    // 0x34c62c: 0x0  nop
    ctx->pc = 0x34c62cu;
    // NOP
label_34c630:
    // 0x34c630: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x34c630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34c634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34C634u;
    {
        const bool branch_taken_0x34c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C634u;
        // 0x34c638: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c634) {
            ctx->pc = 0x34C648u;
            goto label_34c648;
        }
    }
    ctx->pc = 0x34C63Cu;
    // 0x34c63c: 0x0  nop
    ctx->pc = 0x34c63cu;
    // NOP
label_34c640:
    // 0x34c640: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x34c640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34c644: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x34c644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_34c648:
    // 0x34c648: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x34c648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34c64c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x34c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34c650: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x34c650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x34c654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c658: 0x2484f668  addiu       $a0, $a0, -0x998
    ctx->pc = 0x34c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    // 0x34c65c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x34c660: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x34c660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c664: 0x2463f66c  addiu       $v1, $v1, -0x994
    ctx->pc = 0x34c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964844));
    // 0x34c668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34c66c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34c670: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34c670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x34c674: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x34c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c678: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x34c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34c67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c680: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34c680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34c684: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x34c684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x34c688: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c68c: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x34c68cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x34c690: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x34c690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c694: 0x46010383  div.s       $f14, $f0, $f1
    ctx->pc = 0x34c694u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34c698: 0x0  nop
    ctx->pc = 0x34c698u;
    // NOP
    // 0x34c69c: 0x0  nop
    ctx->pc = 0x34c69cu;
    // NOP
    // 0x34c6a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C6A0u;
    {
        const bool branch_taken_0x34c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c6a0) {
            ctx->pc = 0x34C6C0u;
            goto label_34c6c0;
        }
    }
    ctx->pc = 0x34C6A8u;
    // 0x34c6a8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C6A8u;
    {
        const bool branch_taken_0x34c6a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6A8u;
        // 0x34c6ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6a8) {
            ctx->pc = 0x34C6B8u;
            goto label_34c6b8;
        }
    }
    ctx->pc = 0x34C6B0u;
    // 0x34c6b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34C6B0u;
    {
        const bool branch_taken_0x34c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6B0u;
        // 0x34c6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6b0) {
            ctx->pc = 0x34C6C4u;
            goto label_34c6c4;
        }
    }
    ctx->pc = 0x34C6B8u;
label_34c6b8:
    // 0x34c6b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34C6B8u;
    {
        const bool branch_taken_0x34c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6B8u;
        // 0x34c6bc: 0xc6af0024  lwc1        $f15, 0x24($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6b8) {
            ctx->pc = 0x34C6C8u;
            goto label_34c6c8;
        }
    }
    ctx->pc = 0x34C6C0u;
label_34c6c0:
    // 0x34c6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c6c4:
    // 0x34c6c4: 0xc6af0024  lwc1        $f15, 0x24($s5)
    ctx->pc = 0x34c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_34c6c8:
    // 0x34c6c8: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x34c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x34c6cc: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x34c6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x34c6d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x34c6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c6d4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x34c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34c6d8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x34c6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34c6dc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x34C6DCu;
    SET_GPR_U32(ctx, 31, 0x34C6E4u);
    ctx->pc = 0x34C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C6DCu;
    // 0x34c6e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x34C6DCu, 0x34C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6E4u;
label_34c6e4:
    // 0x34c6e4: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x34c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x34c6e8: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x34c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x34c6ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34C6ECu;
    {
        const bool branch_taken_0x34c6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6ECu;
        // 0x34c6f0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6ec) {
            ctx->pc = 0x34C700u;
            goto label_34c700;
        }
    }
    ctx->pc = 0x34C6F4u;
    // 0x34c6f4: 0x0  nop
    ctx->pc = 0x34c6f4u;
    // NOP
label_34c6f8:
    // 0x34c6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c6fc: 0x0  nop
    ctx->pc = 0x34c6fcu;
    // NOP
label_34c700:
    // 0x34c700: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x34c700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34c704: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x34c704u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34c708: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34c708u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34c70c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34c70cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34c710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34c710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34c714: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34c714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34c718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34c718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34c71c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34c71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c728: 0x3e00008  jr          $ra
    ctx->pc = 0x34C728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C728u;
        // 0x34c72c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C730u;
}
