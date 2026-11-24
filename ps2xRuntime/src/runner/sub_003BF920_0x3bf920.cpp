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

// Function: sub_003BF920
// Address: 0x3bf920 - 0x3bfb2c
void sub_003BF920_0x3bf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF920_0x3bf920");
#endif

    switch (ctx->pc) {
        case 0x3bf9b4u: goto label_3bf9b4;
        case 0x3bf9d4u: goto label_3bf9d4;
        case 0x3bf9f4u: goto label_3bf9f4;
        case 0x3bfa14u: goto label_3bfa14;
        case 0x3bfa34u: goto label_3bfa34;
        case 0x3bfab0u: goto label_3bfab0;
        case 0x3bfac0u: goto label_3bfac0;
        case 0x3bfad0u: goto label_3bfad0;
        case 0x3bfae0u: goto label_3bfae0;
        case 0x3bfaf0u: goto label_3bfaf0;
        case 0x3bfb00u: goto label_3bfb00;
        default: break;
    }

    ctx->pc = 0x3bf920u;

    // 0x3bf920: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3bf924: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3bf924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3bf928: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3bf928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3bf92c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bf92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bf930: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3bf930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3bf934: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3bf934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3bf938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3bf938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3bf93c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3bf93cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf940: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bf940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3bf944: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bf944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3bf948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bf948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bf94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bf94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bf950: 0x14a3006b  bne         $a1, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x3BF950u;
    {
        const bool branch_taken_0x3bf950 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF950u;
        // 0x3bf954: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf950) {
            ctx->pc = 0x3BFB00u;
            goto label_3bfb00;
        }
    }
    ctx->pc = 0x3BF958u;
    // 0x3bf958: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3bf958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3bf95c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3bf95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bf960: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x3bf960u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x3bf964: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x3bf964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x3bf968: 0x3443a9e5  ori         $v1, $v0, 0xA9E5
    ctx->pc = 0x3bf968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x3bf96c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3bf96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf970: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3bf970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3bf974: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3bf974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf978: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3bf978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf97c: 0x55040  sll         $t2, $a1, 1
    ctx->pc = 0x3bf97cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3bf980: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3bf980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3bf984: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x3bf984u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3bf988: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x3bf988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3bf98c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf990: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3bf990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x3bf994: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x3bf994u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x3bf998: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3bf998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3bf99c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3bf99cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3bf9a0: 0x0  nop
    ctx->pc = 0x3bf9a0u;
    // NOP
    // 0x3bf9a4: 0x0  nop
    ctx->pc = 0x3bf9a4u;
    // NOP
    // 0x3bf9a8: 0xa810  mfhi        $s5
    ctx->pc = 0x3bf9a8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x3bf9ac: 0xc0efe20  jal         func_3BF880
    ctx->pc = 0x3BF9ACu;
    SET_GPR_U32(ctx, 31, 0x3BF9B4u);
    ctx->pc = 0x3BF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF9ACu;
    // 0x3bf9b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF880u, 0x3BF9ACu, 0x3BF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF9B4u;
label_3bf9b4:
    // 0x3bf9b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3bf9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bf9b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bf9b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bf9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3bf9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3bf9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3bf9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9cc: 0xc0efe20  jal         func_3BF880
    ctx->pc = 0x3BF9CCu;
    SET_GPR_U32(ctx, 31, 0x3BF9D4u);
    ctx->pc = 0x3BF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF9CCu;
    // 0x3bf9d0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF880u, 0x3BF9CCu, 0x3BF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF9D4u;
label_3bf9d4:
    // 0x3bf9d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3bf9d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3bf9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bf9dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bf9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3bf9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3bf9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3bf9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9ec: 0xc0efe20  jal         func_3BF880
    ctx->pc = 0x3BF9ECu;
    SET_GPR_U32(ctx, 31, 0x3BF9F4u);
    ctx->pc = 0x3BF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF9ECu;
    // 0x3bf9f0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF880u, 0x3BF9ECu, 0x3BF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF9F4u;
label_3bf9f4:
    // 0x3bf9f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bf9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bf9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf9fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3bf9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3bfa00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3bfa04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bfa08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa0c: 0xc0efe20  jal         func_3BF880
    ctx->pc = 0x3BFA0Cu;
    SET_GPR_U32(ctx, 31, 0x3BFA14u);
    ctx->pc = 0x3BFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA0Cu;
    // 0x3bfa10: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF880u, 0x3BFA0Cu, 0x3BFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA14u;
label_3bfa14:
    // 0x3bfa14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bfa14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa18: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bfa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3bfa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3bfa20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa24: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3bfa24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bfa28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa2c: 0xc0efe20  jal         func_3BF880
    ctx->pc = 0x3BFA2Cu;
    SET_GPR_U32(ctx, 31, 0x3BFA34u);
    ctx->pc = 0x3BFA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFA2Cu;
    // 0x3bfa30: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF880u, 0x3BFA2Cu, 0x3BFA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFA34u;
label_3bfa34:
    // 0x3bfa34: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3bfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3bfa38: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3bfa38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa3c: 0x240208a3  addiu       $v0, $zero, 0x8A3
    ctx->pc = 0x3bfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2211));
    // 0x3bfa40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BFA40u;
    {
        const bool branch_taken_0x3bfa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA40u;
        // 0x3bfa44: 0x24101e80  addiu       $s0, $zero, 0x1E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa40) {
            ctx->pc = 0x3BFA50u;
            goto label_3bfa50;
        }
    }
    ctx->pc = 0x3BFA48u;
    // 0x3bfa48: 0x24101f40  addiu       $s0, $zero, 0x1F40
    ctx->pc = 0x3bfa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x3bfa4c: 0x0  nop
    ctx->pc = 0x3bfa4cu;
    // NOP
label_3bfa50:
    // 0x3bfa50: 0x240208a1  addiu       $v0, $zero, 0x8A1
    ctx->pc = 0x3bfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2209));
    // 0x3bfa54: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BFA54u;
    {
        const bool branch_taken_0x3bfa54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA54u;
        // 0x3bfa58: 0x2b4082a  slt         $at, $s5, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa54) {
            ctx->pc = 0x3BFAA0u;
            goto label_3bfaa0;
        }
    }
    ctx->pc = 0x3BFA5Cu;
    // 0x3bfa5c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFA5Cu;
    {
        const bool branch_taken_0x3bfa5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA5Cu;
        // 0x3bfa60: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa5c) {
            ctx->pc = 0x3BFA70u;
            goto label_3bfa70;
        }
    }
    ctx->pc = 0x3BFA64u;
    // 0x3bfa64: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3bfa64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bfa68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa6c: 0x0  nop
    ctx->pc = 0x3bfa6cu;
    // NOP
label_3bfa70:
    // 0x3bfa70: 0x293082a  slt         $at, $s4, $s3
    ctx->pc = 0x3bfa70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3bfa74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFA74u;
    {
        const bool branch_taken_0x3bfa74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA74u;
        // 0x3bfa78: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa74) {
            ctx->pc = 0x3BFA88u;
            goto label_3bfa88;
        }
    }
    ctx->pc = 0x3BFA7Cu;
    // 0x3bfa7c: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x3bfa7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3bfa80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa84: 0x0  nop
    ctx->pc = 0x3bfa84u;
    // NOP
label_3bfa88:
    // 0x3bfa88: 0x2b4082a  slt         $at, $s5, $s4
    ctx->pc = 0x3bfa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3bfa8c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFA8Cu;
    {
        const bool branch_taken_0x3bfa8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFA8Cu;
        // 0x3bfa90: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa8c) {
            ctx->pc = 0x3BFAA0u;
            goto label_3bfaa0;
        }
    }
    ctx->pc = 0x3BFA94u;
    // 0x3bfa94: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3bfa94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bfa98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa9c: 0x0  nop
    ctx->pc = 0x3bfa9cu;
    // NOP
label_3bfaa0:
    // 0x3bfaa0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3bfaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfaa4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bfaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfaa8: 0xc0efe18  jal         func_3BF860
    ctx->pc = 0x3BFAA8u;
    SET_GPR_U32(ctx, 31, 0x3BFAB0u);
    ctx->pc = 0x3BFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAA8u;
    // 0x3bfaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF860u, 0x3BFAA8u, 0x3BFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAB0u;
label_3bfab0:
    // 0x3bfab0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3bfab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfab4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3bfab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bfab8: 0xc0efe18  jal         func_3BF860
    ctx->pc = 0x3BFAB8u;
    SET_GPR_U32(ctx, 31, 0x3BFAC0u);
    ctx->pc = 0x3BFABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAB8u;
    // 0x3bfabc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF860u, 0x3BFAB8u, 0x3BFAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAC0u;
label_3bfac0:
    // 0x3bfac0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3bfac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfac4: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3bfac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3bfac8: 0xc0efe18  jal         func_3BF860
    ctx->pc = 0x3BFAC8u;
    SET_GPR_U32(ctx, 31, 0x3BFAD0u);
    ctx->pc = 0x3BFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAC8u;
    // 0x3bfacc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF860u, 0x3BFAC8u, 0x3BFAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAD0u;
label_3bfad0:
    // 0x3bfad0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bfad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfad4: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x3bfad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3bfad8: 0xc0efe18  jal         func_3BF860
    ctx->pc = 0x3BFAD8u;
    SET_GPR_U32(ctx, 31, 0x3BFAE0u);
    ctx->pc = 0x3BFADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAD8u;
    // 0x3bfadc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF860u, 0x3BFAD8u, 0x3BFAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAE0u;
label_3bfae0:
    // 0x3bfae0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3bfae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfae4: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x3bfae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3bfae8: 0xc0efe18  jal         func_3BF860
    ctx->pc = 0x3BFAE8u;
    SET_GPR_U32(ctx, 31, 0x3BFAF0u);
    ctx->pc = 0x3BFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAE8u;
    // 0x3bfaec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF860u, 0x3BFAE8u, 0x3BFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFAF0u;
label_3bfaf0:
    // 0x3bfaf0: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x3bfaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3bfaf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bfaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfaf8: 0xc0efe18  jal         func_3BF860
    ctx->pc = 0x3BFAF8u;
    SET_GPR_U32(ctx, 31, 0x3BFB00u);
    ctx->pc = 0x3BFAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFAF8u;
    // 0x3bfafc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF860u, 0x3BFAF8u, 0x3BFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFB00u;
label_3bfb00:
    // 0x3bfb00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3bfb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bfb04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3bfb04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bfb08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3bfb08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bfb0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3bfb0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bfb10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bfb10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bfb14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bfb14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bfb18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bfb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bfb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bfb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bfb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bfb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfb24: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB24u;
        // 0x3bfb28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFB2Cu;
}
