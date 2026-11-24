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

// Function: sub_0034A8B0
// Address: 0x34a8b0 - 0x34aa30
void sub_0034A8B0_0x34a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A8B0_0x34a8b0");
#endif

    switch (ctx->pc) {
        case 0x34a918u: goto label_34a918;
        case 0x34a940u: goto label_34a940;
        case 0x34a994u: goto label_34a994;
        case 0x34a9ecu: goto label_34a9ec;
        default: break;
    }

    ctx->pc = 0x34a8b0u;

    // 0x34a8b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x34a8b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x34a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x34a8b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x34a8bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34a8c0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x34a8c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34a8c8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x34a8c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34a8d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34a8d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34a8d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x34a8d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a8e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34a8e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a8e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34a8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34a8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a8f4: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x34a8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x34a8f8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x34a8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34a8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a908: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x34a908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x34a90c: 0x2508a840  addiu       $t0, $t0, -0x57C0
    ctx->pc = 0x34a90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944832));
    // 0x34a910: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x34A910u;
    SET_GPR_U32(ctx, 31, 0x34A918u);
    ctx->pc = 0x34A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A910u;
    // 0x34a914: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x34A910u, 0x34A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A918u;
label_34a918:
    // 0x34a918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34a918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a91c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x34A91Cu;
    {
        const bool branch_taken_0x34a91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A91Cu;
        // 0x34a920: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a91c) {
            ctx->pc = 0x34A9F8u;
            goto label_34a9f8;
        }
    }
    ctx->pc = 0x34A924u;
    // 0x34a924: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x34a924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a928: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34a928u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a930: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34a930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a934: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x34a934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34a938: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x34A938u;
    SET_GPR_U32(ctx, 31, 0x34A940u);
    ctx->pc = 0x34A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A938u;
    // 0x34a93c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x34A938u, 0x34A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A940u;
label_34a940:
    // 0x34a940: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x34a940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34a944: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x34a944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x34a948: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34a948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34a94c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x34a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x34a950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a954: 0x24a5f5f2  addiu       $a1, $a1, -0xA0E
    ctx->pc = 0x34a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964722));
    // 0x34a958: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x34a958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34a95c: 0x2484f5f4  addiu       $a0, $a0, -0xA0C
    ctx->pc = 0x34a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964724));
    // 0x34a960: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x34a960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x34a964: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x34a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x34a968: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x34a968u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34a96c: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x34a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x34a970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a978: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x34a978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x34a97c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x34a97cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a980: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x34a980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x34a984: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x34a984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x34a988: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x34a988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a98c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x34A98Cu;
    SET_GPR_U32(ctx, 31, 0x34A994u);
    ctx->pc = 0x34A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A98Cu;
    // 0x34a990: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x34A98Cu, 0x34A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A994u;
label_34a994:
    // 0x34a994: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x34a994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x34a998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34a998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34a99c: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x34a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x34a9a0: 0xa21e0568  sb          $fp, 0x568($s0)
    ctx->pc = 0x34a9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 30));
    // 0x34a9a4: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x34a9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x34a9a8: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x34a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x34a9ac: 0x9282000a  lbu         $v0, 0xA($s4)
    ctx->pc = 0x34a9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x34a9b0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A9B0u;
    {
        const bool branch_taken_0x34a9b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9B0u;
        // 0x34a9b4: 0xa202056a  sb          $v0, 0x56A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1386), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a9b0) {
            ctx->pc = 0x34A9C0u;
            goto label_34a9c0;
        }
    }
    ctx->pc = 0x34A9B8u;
    // 0x34a9b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34a9bc: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x34a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
label_34a9c0:
    // 0x34a9c0: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x34a9c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x34a9c4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34a9c8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x34a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34a9cc: 0x2442f5fc  addiu       $v0, $v0, -0xA04
    ctx->pc = 0x34a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964732));
    // 0x34a9d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34a9d4: 0x7e030550  sq          $v1, 0x550($s0)
    ctx->pc = 0x34a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 3));
    // 0x34a9d8: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x34a9d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x34a9dc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x34a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x34a9e0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x34a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a9e4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34A9E4u;
    SET_GPR_U32(ctx, 31, 0x34A9ECu);
    ctx->pc = 0x34A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9E4u;
    // 0x34a9e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34A9E4u, 0x34A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9ECu;
label_34a9ec:
    // 0x34a9ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34A9ECu;
    {
        const bool branch_taken_0x34a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9ECu;
        // 0x34a9f0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a9ec) {
            ctx->pc = 0x34AA00u;
            goto label_34aa00;
        }
    }
    ctx->pc = 0x34A9F4u;
    // 0x34a9f4: 0x0  nop
    ctx->pc = 0x34a9f4u;
    // NOP
label_34a9f8:
    // 0x34a9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9fc: 0x0  nop
    ctx->pc = 0x34a9fcu;
    // NOP
label_34aa00:
    // 0x34aa00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x34aa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34aa04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x34aa04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34aa08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34aa08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34aa0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34aa0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34aa10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34aa10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34aa14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34aa14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34aa18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34aa18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34aa1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34aa1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34aa20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34aa20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34aa24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34aa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x34AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA28u;
        // 0x34aa2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AA30u;
}
