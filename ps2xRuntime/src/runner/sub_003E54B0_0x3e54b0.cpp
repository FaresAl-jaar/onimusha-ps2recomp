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

// Function: sub_003E54B0
// Address: 0x3e54b0 - 0x3e5f50
void sub_003E54B0_0x3e54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E54B0_0x3e54b0");
#endif

    switch (ctx->pc) {
        case 0x3e552cu: goto label_3e552c;
        case 0x3e559cu: goto label_3e559c;
        case 0x3e5644u: goto label_3e5644;
        case 0x3e569cu: goto label_3e569c;
        case 0x3e56dcu: goto label_3e56dc;
        case 0x3e5714u: goto label_3e5714;
        case 0x3e5720u: goto label_3e5720;
        case 0x3e5740u: goto label_3e5740;
        case 0x3e57c4u: goto label_3e57c4;
        case 0x3e58acu: goto label_3e58ac;
        case 0x3e5b04u: goto label_3e5b04;
        case 0x3e5b0cu: goto label_3e5b0c;
        case 0x3e5b58u: goto label_3e5b58;
        case 0x3e5c04u: goto label_3e5c04;
        case 0x3e5c84u: goto label_3e5c84;
        case 0x3e5cfcu: goto label_3e5cfc;
        case 0x3e5d38u: goto label_3e5d38;
        case 0x3e5d48u: goto label_3e5d48;
        case 0x3e5d84u: goto label_3e5d84;
        case 0x3e5ea4u: goto label_3e5ea4;
        case 0x3e5f14u: goto label_3e5f14;
        case 0x3e5f2cu: goto label_3e5f2c;
        default: break;
    }

    ctx->pc = 0x3e54b0u;

    // 0x3e54b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e54b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e54b4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3e54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e54b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e54b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e54bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e54bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e54c0: 0x90850080  lbu         $a1, 0x80($a0)
    ctx->pc = 0x3e54c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3e54c4: 0x10a3027e  beq         $a1, $v1, . + 4 + (0x27E << 2)
    ctx->pc = 0x3E54C4u;
    {
        const bool branch_taken_0x3e54c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54C4u;
        // 0x3e54c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54c4) {
            ctx->pc = 0x3E5EC0u;
            goto label_3e5ec0;
        }
    }
    ctx->pc = 0x3E54CCu;
    // 0x3e54cc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3e54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e54d0: 0x10a3025f  beq         $a1, $v1, . + 4 + (0x25F << 2)
    ctx->pc = 0x3E54D0u;
    {
        const bool branch_taken_0x3e54d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54D0u;
        // 0x3e54d4: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54d0) {
            ctx->pc = 0x3E5E50u;
            goto label_3e5e50;
        }
    }
    ctx->pc = 0x3E54D8u;
    // 0x3e54d8: 0x10a3022d  beq         $a1, $v1, . + 4 + (0x22D << 2)
    ctx->pc = 0x3E54D8u;
    {
        const bool branch_taken_0x3e54d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e54d8) {
            ctx->pc = 0x3E5D90u;
            goto label_3e5d90;
        }
    }
    ctx->pc = 0x3E54E0u;
    // 0x3e54e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e54e4: 0x10a3016e  beq         $a1, $v1, . + 4 + (0x16E << 2)
    ctx->pc = 0x3E54E4u;
    {
        const bool branch_taken_0x3e54e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54E4u;
        // 0x3e54e8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54e4) {
            ctx->pc = 0x3E5AA0u;
            goto label_3e5aa0;
        }
    }
    ctx->pc = 0x3E54ECu;
    // 0x3e54ec: 0x10a30110  beq         $a1, $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x3E54ECu;
    {
        const bool branch_taken_0x3e54ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e54ec) {
            ctx->pc = 0x3E5930u;
            goto label_3e5930;
        }
    }
    ctx->pc = 0x3E54F4u;
    // 0x3e54f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e54f8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E54F8u;
    {
        const bool branch_taken_0x3e54f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e54f8) {
            ctx->pc = 0x3E5510u;
            goto label_3e5510;
        }
    }
    ctx->pc = 0x3E5500u;
    // 0x3e5500: 0x10a0028f  beqz        $a1, . + 4 + (0x28F << 2)
    ctx->pc = 0x3E5500u;
    {
        const bool branch_taken_0x3e5500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5500) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5508u;
    // 0x3e5508: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x3E5508u;
    {
        const bool branch_taken_0x3e5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5508) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5510u;
label_3e5510:
    // 0x3e5510: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3e5510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3e5514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e5514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e5518: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3e5518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x3e551c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3e551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3e5520: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3e5520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x3e5524: 0xc0f9fb4  jal         func_3E7ED0
    ctx->pc = 0x3E5524u;
    SET_GPR_U32(ctx, 31, 0x3E552Cu);
    ctx->pc = 0x3E5528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5524u;
    // 0x3e5528: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7ED0u, 0x3E5524u, 0x3E552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E552Cu;
label_3e552c:
    // 0x3e552c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e552cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e5530: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x3e5530u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e5534: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x3e5534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x3e5538: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3E5538u;
    {
        const bool branch_taken_0x3e5538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5538) {
            ctx->pc = 0x3E5650u;
            goto label_3e5650;
        }
    }
    ctx->pc = 0x3E5540u;
    // 0x3e5540: 0x82050084  lb          $a1, 0x84($s0)
    ctx->pc = 0x3e5540u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e5544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e5544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e5548: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e5548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e554c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5550: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3e5550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3e5554: 0x14830088  bne         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x3E5554u;
    {
        const bool branch_taken_0x3e5554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5554u;
        // 0x3e5558: 0x80a50014  lb          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5554) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E555Cu;
    // 0x3e555c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x3e555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3e5560: 0x8042001e  lb          $v0, 0x1E($v0)
    ctx->pc = 0x3e5560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x3e5564: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E5564u;
    {
        const bool branch_taken_0x3e5564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5564u;
        // 0x3e5568: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5564) {
            ctx->pc = 0x3E5610u;
            goto label_3e5610;
        }
    }
    ctx->pc = 0x3E556Cu;
    // 0x3e556c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e556cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5570: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5574: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5578: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e5578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e557c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e557cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5580: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e558c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e558cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5590: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5594: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5594u;
    SET_GPR_U32(ctx, 31, 0x3E559Cu);
    ctx->pc = 0x3E5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5594u;
    // 0x3e5598: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5594u, 0x3E559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E559Cu;
label_3e559c:
    // 0x3e559c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e55a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e55a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e55a4: 0xa2030080  sb          $v1, 0x80($s0)
    ctx->pc = 0x3e55a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e55a8: 0x8424f564  lh          $a0, -0xA9C($at)
    ctx->pc = 0x3e55a8u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x65F564u));
    // 0x3e55ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e55acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e55b0: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x3e55b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x3e55b4: 0x8423f566  lh          $v1, -0xA9A($at)
    ctx->pc = 0x3e55b4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x65F566u));
    // 0x3e55b8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e55b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e55bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3e55c0: 0xa424f7e4  sh          $a0, -0x81C($at)
    ctx->pc = 0x3e55c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65F7E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x65F7E4u, _value); } while (0);
    // 0x3e55c4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e55c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e55c8: 0xa423f7e6  sh          $v1, -0x81A($at)
    ctx->pc = 0x3e55c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65F7E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x65F7E6u, _value); } while (0);
    // 0x3e55cc: 0xa2000085  sb          $zero, 0x85($s0)
    ctx->pc = 0x3e55ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e55d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e55d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e55d4: 0x82040085  lb          $a0, 0x85($s0)
    ctx->pc = 0x3e55d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e55d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3e55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3e55dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e55e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e55e4: 0x24630146  addiu       $v1, $v1, 0x146
    ctx->pc = 0x3e55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 326));
    // 0x3e55e8: 0xa423f964  sh          $v1, -0x69C($at)
    ctx->pc = 0x3e55e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965604), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e55ec: 0x82040085  lb          $a0, 0x85($s0)
    ctx->pc = 0x3e55ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e55f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e55f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e55f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3e55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3e55f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e55fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e5600: 0x24630146  addiu       $v1, $v1, 0x146
    ctx->pc = 0x3e5600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 326));
    // 0x3e5604: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3E5604u;
    {
        const bool branch_taken_0x3e5604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5604u;
        // 0x3e5608: 0xa423f97c  sh          $v1, -0x684($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294965628), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5604) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E560Cu;
    // 0x3e560c: 0x0  nop
    ctx->pc = 0x3e560cu;
    // NOP
label_3e5610:
    // 0x3e5610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5614: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5618: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e561c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3e561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3e5620: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5628: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e562c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e562cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5634: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5638: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5638u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e563c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E563Cu;
    SET_GPR_U32(ctx, 31, 0x3E5644u);
    ctx->pc = 0x3E5640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E563Cu;
    // 0x3e5640: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E563Cu, 0x3E5644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5644u;
label_3e5644:
    // 0x3e5644: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3E5644u;
    {
        const bool branch_taken_0x3e5644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5644) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E564Cu;
    // 0x3e564c: 0x0  nop
    ctx->pc = 0x3e564cu;
    // NOP
label_3e5650:
    // 0x3e5650: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x3e5650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3e5654: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3E5654u;
    {
        const bool branch_taken_0x3e5654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5654u;
        // 0x3e5658: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5654) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E565Cu;
    // 0x3e565c: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x3e565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x3e5660: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3e5660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3e5664: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E5664u;
    {
        const bool branch_taken_0x3e5664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5664u;
        // 0x3e5668: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5664) {
            ctx->pc = 0x3E56A8u;
            goto label_3e56a8;
        }
    }
    ctx->pc = 0x3E566Cu;
    // 0x3e566c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e566cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5670: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5674: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5678: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e5678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e567c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e567cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5680: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e568c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e568cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5690: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5694: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5694u;
    SET_GPR_U32(ctx, 31, 0x3E569Cu);
    ctx->pc = 0x3E5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5694u;
    // 0x3e5698: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5694u, 0x3E569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E569Cu;
label_3e569c:
    // 0x3e569c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3E569Cu;
    {
        const bool branch_taken_0x3e569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e569c) {
            ctx->pc = 0x3E56E0u;
            goto label_3e56e0;
        }
    }
    ctx->pc = 0x3E56A4u;
    // 0x3e56a4: 0x0  nop
    ctx->pc = 0x3e56a4u;
    // NOP
label_3e56a8:
    // 0x3e56a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e56ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e56acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e56b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e56b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e56b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e56b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e56bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e56bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e56c0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e56c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e56c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e56c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e56c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e56c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e56cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e56ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e56d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e56d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e56d4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E56D4u;
    SET_GPR_U32(ctx, 31, 0x3E56DCu);
    ctx->pc = 0x3E56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E56D4u;
    // 0x3e56d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E56D4u, 0x3E56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E56DCu;
label_3e56dc:
    // 0x3e56dc: 0x0  nop
    ctx->pc = 0x3e56dcu;
    // NOP
label_3e56e0:
    // 0x3e56e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e56e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e56e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e56ec: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3e56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3e56f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e56f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e56f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e56f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e56f8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e56f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e56fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e56fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e570c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E570Cu;
    SET_GPR_U32(ctx, 31, 0x3E5714u);
    ctx->pc = 0x3E5710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E570Cu;
    // 0x3e5710: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E570Cu, 0x3E5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5714u;
label_3e5714:
    // 0x3e5714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5718: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E5718u;
    SET_GPR_U32(ctx, 31, 0x3E5720u);
    ctx->pc = 0x3E571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5718u;
    // 0x3e571c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E5718u, 0x3E5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5720u;
label_3e5720:
    // 0x3e5720: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5724: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e5724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5728: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e5728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e572c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5738: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E5738u;
    SET_GPR_U32(ctx, 31, 0x3E5740u);
    ctx->pc = 0x3E573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5738u;
    // 0x3e573c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E5738u, 0x3E5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5740u;
label_3e5740:
    // 0x3e5740: 0x82030086  lb          $v1, 0x86($s0)
    ctx->pc = 0x3e5740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x3e5744: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E5744u;
    {
        const bool branch_taken_0x3e5744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5744) {
            ctx->pc = 0x3E5760u;
            goto label_3e5760;
        }
    }
    ctx->pc = 0x3E574Cu;
    // 0x3e574c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x3e574cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5750: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3e5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e5754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5758: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E5758u;
    {
        const bool branch_taken_0x3e5758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5758u;
        // 0x3e575c: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5758) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E5760u;
label_3e5760:
    // 0x3e5760: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e5764: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e5764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e576c: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x3e576cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5770: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x3e5770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5774: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x3e5774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_3e5778:
    // 0x3e5778: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e5778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e577c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e577cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e5780: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e5780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3e5784: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3e5784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3e5788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e5788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e578c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3E578Cu;
    {
        const bool branch_taken_0x3e578c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e578c) {
            ctx->pc = 0x3E5868u;
            goto label_3e5868;
        }
    }
    ctx->pc = 0x3E5794u;
    // 0x3e5794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5798: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e579c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e57a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e57a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e57a4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e57a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e57a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e57ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e57acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e57b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e57b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e57b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e57b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e57b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e57b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e57bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E57BCu;
    SET_GPR_U32(ctx, 31, 0x3E57C4u);
    ctx->pc = 0x3E57C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E57BCu;
    // 0x3e57c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E57BCu, 0x3E57C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E57C4u;
label_3e57c4:
    // 0x3e57c4: 0x82030084  lb          $v1, 0x84($s0)
    ctx->pc = 0x3e57c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e57c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e57cc: 0xa2030084  sb          $v1, 0x84($s0)
    ctx->pc = 0x3e57ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e57d0: 0x82040084  lb          $a0, 0x84($s0)
    ctx->pc = 0x3e57d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e57d4: 0x4810012  bgez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E57D4u;
    {
        const bool branch_taken_0x3e57d4 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x3e57d4) {
            ctx->pc = 0x3E5820u;
            goto label_3e5820;
        }
    }
    ctx->pc = 0x3E57DCu;
    // 0x3e57dc: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x3e57dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x3e57e0: 0xa2030084  sb          $v1, 0x84($s0)
    ctx->pc = 0x3e57e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e57e4: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x3e57e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x3e57e8: 0xa2030083  sb          $v1, 0x83($s0)
    ctx->pc = 0x3e57e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e57ec: 0x82030083  lb          $v1, 0x83($s0)
    ctx->pc = 0x3e57ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e57f0: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x3e57f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e57f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E57F4u;
    {
        const bool branch_taken_0x3e57f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57F4u;
        // 0x3e57f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e57f4) {
            ctx->pc = 0x3E5800u;
            goto label_3e5800;
        }
    }
    ctx->pc = 0x3E57FCu;
    // 0x3e57fc: 0xa2030083  sb          $v1, 0x83($s0)
    ctx->pc = 0x3e57fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 3));
label_3e5800:
    // 0x3e5800: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x3e5800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x3e5804: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3e5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3e5808: 0xa2030081  sb          $v1, 0x81($s0)
    ctx->pc = 0x3e5808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e580c: 0x82030081  lb          $v1, 0x81($s0)
    ctx->pc = 0x3e580cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x3e5810: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3E5810u;
    {
        const bool branch_taken_0x3e5810 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3e5810) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E5818u;
    // 0x3e5818: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E5818u;
    {
        const bool branch_taken_0x3e5818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5818u;
        // 0x3e581c: 0xa2000081  sb          $zero, 0x81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5818) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E5820u;
label_3e5820:
    // 0x3e5820: 0x82030081  lb          $v1, 0x81($s0)
    ctx->pc = 0x3e5820u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x3e5824: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3e5824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5828: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5828u;
    {
        const bool branch_taken_0x3e5828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5828) {
            ctx->pc = 0x3E5838u;
            goto label_3e5838;
        }
    }
    ctx->pc = 0x3E5830u;
    // 0x3e5830: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E5830u;
    {
        const bool branch_taken_0x3e5830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5830u;
        // 0x3e5834: 0xa2040081  sb          $a0, 0x81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5830) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E5838u;
label_3e5838:
    // 0x3e5838: 0x82030083  lb          $v1, 0x83($s0)
    ctx->pc = 0x3e5838u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e583c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e5840: 0xa2030083  sb          $v1, 0x83($s0)
    ctx->pc = 0x3e5840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5844: 0x0  nop
    ctx->pc = 0x3e5844u;
    // NOP
label_3e5848:
    // 0x3e5848: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e5848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3e584c: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5850: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5854: 0x34649090  ori         $a0, $v1, 0x9090
    ctx->pc = 0x3e5854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5858: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e5858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e585c: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3e585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x3e5860: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x3E5860u;
    {
        const bool branch_taken_0x3e5860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5860u;
        // 0x3e5864: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5860) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5868u;
label_3e5868:
    // 0x3e5868: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3e5868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3e586c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e586cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e5870: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e5870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e5874: 0x106001b2  beqz        $v1, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x3E5874u;
    {
        const bool branch_taken_0x3e5874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5874) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E587Cu;
    // 0x3e587c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5880: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5884: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5888: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e588c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e5890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5894: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e589c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e589cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e58a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e58a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e58a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E58A4u;
    SET_GPR_U32(ctx, 31, 0x3E58ACu);
    ctx->pc = 0x3E58A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E58A4u;
    // 0x3e58a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E58A4u, 0x3E58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E58ACu;
label_3e58ac:
    // 0x3e58ac: 0x82030084  lb          $v1, 0x84($s0)
    ctx->pc = 0x3e58acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e58b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e58b4: 0xa2030084  sb          $v1, 0x84($s0)
    ctx->pc = 0x3e58b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e58b8: 0x82050084  lb          $a1, 0x84($s0)
    ctx->pc = 0x3e58b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e58bc: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x3e58bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x3e58c0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3e58c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3e58c4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E58C4u;
    {
        const bool branch_taken_0x3e58c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e58c4) {
            ctx->pc = 0x3E58E0u;
            goto label_3e58e0;
        }
    }
    ctx->pc = 0x3E58CCu;
    // 0x3e58cc: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x3e58ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e58d0: 0xa2000083  sb          $zero, 0x83($s0)
    ctx->pc = 0x3e58d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e58d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E58D4u;
    {
        const bool branch_taken_0x3e58d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58D4u;
        // 0x3e58d8: 0xa2000081  sb          $zero, 0x81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e58d4) {
            ctx->pc = 0x3E5910u;
            goto label_3e5910;
        }
    }
    ctx->pc = 0x3E58DCu;
    // 0x3e58dc: 0x0  nop
    ctx->pc = 0x3e58dcu;
    // NOP
label_3e58e0:
    // 0x3e58e0: 0x82040081  lb          $a0, 0x81($s0)
    ctx->pc = 0x3e58e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x3e58e4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x3e58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e58e8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3e58e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3e58ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E58ECu;
    {
        const bool branch_taken_0x3e58ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58ECu;
        // 0x3e58f0: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e58ec) {
            ctx->pc = 0x3E5900u;
            goto label_3e5900;
        }
    }
    ctx->pc = 0x3E58F4u;
    // 0x3e58f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E58F4u;
    {
        const bool branch_taken_0x3e58f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58F4u;
        // 0x3e58f8: 0xa2030081  sb          $v1, 0x81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e58f4) {
            ctx->pc = 0x3E5910u;
            goto label_3e5910;
        }
    }
    ctx->pc = 0x3E58FCu;
    // 0x3e58fc: 0x0  nop
    ctx->pc = 0x3e58fcu;
    // NOP
label_3e5900:
    // 0x3e5900: 0x82030083  lb          $v1, 0x83($s0)
    ctx->pc = 0x3e5900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e5904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5908: 0xa2030083  sb          $v1, 0x83($s0)
    ctx->pc = 0x3e5908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e590c: 0x0  nop
    ctx->pc = 0x3e590cu;
    // NOP
label_3e5910:
    // 0x3e5910: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e5910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3e5914: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e5914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5918: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e591c: 0x34649090  ori         $a0, $v1, 0x9090
    ctx->pc = 0x3e591cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5920: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e5920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e5924: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3e5924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x3e5928: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x3E5928u;
    {
        const bool branch_taken_0x3e5928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5928u;
        // 0x3e592c: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5928) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5930u;
label_3e5930:
    // 0x3e5930: 0x8203005d  lb          $v1, 0x5D($s0)
    ctx->pc = 0x3e5930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x3e5934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e5934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5938: 0x1064004b  beq         $v1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3E5938u;
    {
        const bool branch_taken_0x3e5938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e5938) {
            ctx->pc = 0x3E5A68u;
            goto label_3e5a68;
        }
    }
    ctx->pc = 0x3E5940u;
    // 0x3e5940: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5940u;
    {
        const bool branch_taken_0x3e5940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5940) {
            ctx->pc = 0x3E5950u;
            goto label_3e5950;
        }
    }
    ctx->pc = 0x3E5948u;
    // 0x3e5948: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x3E5948u;
    {
        const bool branch_taken_0x3e5948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5948) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5950u;
label_3e5950:
    // 0x3e5950: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x3e5950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e5954: 0x3c05e000  lui         $a1, 0xE000
    ctx->pc = 0x3e5954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57344 << 16));
    // 0x3e5958: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x3e5958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x3e595c: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x3e595cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5960: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3e5960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3e5964: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x3e5964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
    // 0x3e5968: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3e5968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e596c: 0x14a30174  bne         $a1, $v1, . + 4 + (0x174 << 2)
    ctx->pc = 0x3E596Cu;
    {
        const bool branch_taken_0x3e596c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e596c) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5974u;
    // 0x3e5974: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e5974u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e5978: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e5978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e597c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e597cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e5980: 0x24a5f1a4  addiu       $a1, $a1, -0xE5C
    ctx->pc = 0x3e5980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963620));
    // 0x3e5984: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5988: 0x2463f1a6  addiu       $v1, $v1, -0xE5A
    ctx->pc = 0x3e5988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963622));
    // 0x3e598c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3e598cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e5990: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3e5990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3e5994: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3e5994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x3e5998: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e5998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e599c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e599cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e59a0: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3e59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3e59a4: 0xa425f7e4  sh          $a1, -0x81C($at)
    ctx->pc = 0x3e59a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965220), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e59a8: 0x82060083  lb          $a2, 0x83($s0)
    ctx->pc = 0x3e59a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e59ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e59acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e59b0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e59b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e59b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e59b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e59b8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e59bc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e59bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e59c0: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e59c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e59c4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3e59c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3e59c8: 0xa425f7e6  sh          $a1, -0x81A($at)
    ctx->pc = 0x3e59c8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965222), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e59cc: 0x82060083  lb          $a2, 0x83($s0)
    ctx->pc = 0x3e59ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e59d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e59d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e59d4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e59d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e59d8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e59dc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e59e0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e59e4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e59e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e59e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e59ec: 0xa425f906  sh          $a1, -0x6FA($at)
    ctx->pc = 0x3e59ecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965510), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e59f0: 0x82060083  lb          $a2, 0x83($s0)
    ctx->pc = 0x3e59f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e59f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e59f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e59f8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e59f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e59fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e5a00: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e5a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e5a04: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e5a08: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e5a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e5a0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e5a10: 0xa425f91e  sh          $a1, -0x6E2($at)
    ctx->pc = 0x3e5a10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965534), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e5a14: 0x82060083  lb          $a2, 0x83($s0)
    ctx->pc = 0x3e5a14u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e5a18: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5a1c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e5a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e5a20: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e5a24: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e5a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e5a28: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3e5a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e5a2c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e5a2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e5a30: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e5a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e5a34: 0xa425f936  sh          $a1, -0x6CA($at)
    ctx->pc = 0x3e5a34u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965558), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e5a38: 0x82060083  lb          $a2, 0x83($s0)
    ctx->pc = 0x3e5a38u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e5a3c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5a40: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e5a44: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e5a48: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e5a48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e5a4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e5a50: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e5a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e5a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e5a58: 0xa423f94e  sh          $v1, -0x6B2($at)
    ctx->pc = 0x3e5a58u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965582), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5a5c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x3E5A5Cu;
    {
        const bool branch_taken_0x3e5a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A5Cu;
        // 0x3e5a60: 0xa204005d  sb          $a0, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a5c) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5A64u;
    // 0x3e5a64: 0x0  nop
    ctx->pc = 0x3e5a64u;
    // NOP
label_3e5a68:
    // 0x3e5a68: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x3e5a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e5a6c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3e5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3e5a70: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e5a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5a74: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x3e5a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5a78: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3e5a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3e5a7c: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x3e5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
    // 0x3e5a80: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3e5a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e5a84: 0x14a3012e  bne         $a1, $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x3E5A84u;
    {
        const bool branch_taken_0x3e5a84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e5a84) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5A8Cu;
    // 0x3e5a8c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3e5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x3e5a90: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5a94: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x3E5A94u;
    {
        const bool branch_taken_0x3e5a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A94u;
        // 0x3e5a98: 0xa2040080  sb          $a0, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a94) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5A9Cu;
    // 0x3e5a9c: 0x0  nop
    ctx->pc = 0x3e5a9cu;
    // NOP
label_3e5aa0:
    // 0x3e5aa0: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x3e5aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3e5aa4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x3e5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x3e5aa8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e5aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e5aac: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x3e5aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x3e5ab0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e5ab4: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x3e5ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
    // 0x3e5ab8: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x3e5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3e5abc: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3e5abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x3e5ac0: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x3e5ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
    // 0x3e5ac4: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e5ac8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e5ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e5acc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E5ACCu;
    {
        const bool branch_taken_0x3e5acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5acc) {
            ctx->pc = 0x3E5B10u;
            goto label_3e5b10;
        }
    }
    ctx->pc = 0x3E5AD4u;
    // 0x3e5ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5ad8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5adc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5ae0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5ae4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e5ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e5ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5af0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5af4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5af8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5af8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5afc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5AFCu;
    SET_GPR_U32(ctx, 31, 0x3E5B04u);
    ctx->pc = 0x3E5B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5AFCu;
    // 0x3e5b00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5AFCu, 0x3E5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B04u;
label_3e5b04:
    // 0x3e5b04: 0xc0f9ed8  jal         func_3E7B60
    ctx->pc = 0x3E5B04u;
    SET_GPR_U32(ctx, 31, 0x3E5B0Cu);
    ctx->pc = 0x3E5B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B04u;
    // 0x3e5b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7B60u, 0x3E5B04u, 0x3E5B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B0Cu;
label_3e5b0c:
    // 0x3e5b0c: 0x0  nop
    ctx->pc = 0x3e5b0cu;
    // NOP
label_3e5b10:
    // 0x3e5b10: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e5b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e5b14: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e5b18: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x3e5b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3e5b1c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E5B1Cu;
    {
        const bool branch_taken_0x3e5b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5b1c) {
            ctx->pc = 0x3E5BB8u;
            goto label_3e5bb8;
        }
    }
    ctx->pc = 0x3E5B24u;
    // 0x3e5b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5b28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5b2c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5b30: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5b34: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e5b38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b3c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5b48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5b4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5b50: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5B50u;
    SET_GPR_U32(ctx, 31, 0x3E5B58u);
    ctx->pc = 0x3E5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5B50u;
    // 0x3e5b54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5B50u, 0x3E5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5B58u;
label_3e5b58:
    // 0x3e5b58: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e5b58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e5b5c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e5b60: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e5b64: 0x24a5f1a4  addiu       $a1, $a1, -0xE5C
    ctx->pc = 0x3e5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963620));
    // 0x3e5b68: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5b6c: 0x2484f1a6  addiu       $a0, $a0, -0xE5A
    ctx->pc = 0x3e5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963622));
    // 0x3e5b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5b74: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3e5b74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e5b78: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3e5b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3e5b7c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3e5b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x3e5b80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e5b84: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3e5b84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e5b88: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3e5b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3e5b8c: 0xa425f7e4  sh          $a1, -0x81C($at)
    ctx->pc = 0x3e5b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965220), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e5b90: 0x82060083  lb          $a2, 0x83($s0)
    ctx->pc = 0x3e5b90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e5b94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5b98: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3e5b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e5b9c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e5b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e5ba0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e5ba4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e5ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e5ba8: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e5ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e5bac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e5bb0: 0xa424f7e6  sh          $a0, -0x81A($at)
    ctx->pc = 0x3e5bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965222), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e5bb4: 0xa2030080  sb          $v1, 0x80($s0)
    ctx->pc = 0x3e5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
label_3e5bb8:
    // 0x3e5bb8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e5bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e5bbc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e5bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e5bc0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3e5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3e5bc4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3e5bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3e5bc8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e5bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e5bcc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E5BCCu;
    {
        const bool branch_taken_0x3e5bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5bcc) {
            ctx->pc = 0x3E5C40u;
            goto label_3e5c40;
        }
    }
    ctx->pc = 0x3E5BD4u;
    // 0x3e5bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5bd8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5bdc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5be0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5be4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e5be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e5be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5bf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5bf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5bfc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5BFCu;
    SET_GPR_U32(ctx, 31, 0x3E5C04u);
    ctx->pc = 0x3E5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5BFCu;
    // 0x3e5c00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5BFCu, 0x3E5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C04u;
label_3e5c04:
    // 0x3e5c04: 0x82030085  lb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e5c08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e5c0c: 0xa2030085  sb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5c10: 0x82030085  lb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e5c14: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5C14u;
    {
        const bool branch_taken_0x3e5c14 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3E5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C14u;
        // 0x3e5c18: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c14) {
            ctx->pc = 0x3E5C20u;
            goto label_3e5c20;
        }
    }
    ctx->pc = 0x3E5C1Cu;
    // 0x3e5c1c: 0xa2030085  sb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 3));
label_3e5c20:
    // 0x3e5c20: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3e5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x3e5c24: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5c28: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5c2c: 0x34649090  ori         $a0, $v1, 0x9090
    ctx->pc = 0x3e5c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5c30: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3e5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e5c34: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x3e5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x3e5c38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3E5C38u;
    {
        const bool branch_taken_0x3e5c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C38u;
        // 0x3e5c3c: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c38) {
            ctx->pc = 0x3E5CC8u;
            goto label_3e5cc8;
        }
    }
    ctx->pc = 0x3E5C40u;
label_3e5c40:
    // 0x3e5c40: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3e5c44: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3e5c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3e5c48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e5c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e5c4c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E5C4Cu;
    {
        const bool branch_taken_0x3e5c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5c4c) {
            ctx->pc = 0x3E5CC8u;
            goto label_3e5cc8;
        }
    }
    ctx->pc = 0x3E5C54u;
    // 0x3e5c54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5c58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5c5c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5c60: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5c64: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e5c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e5c68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5c78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5c7c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E5C84u);
    ctx->pc = 0x3E5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C7Cu;
    // 0x3e5c80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5C7Cu, 0x3E5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C84u;
label_3e5c84:
    // 0x3e5c84: 0x82030085  lb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e5c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5c8c: 0xa2030085  sb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5c90: 0x82030085  lb          $v1, 0x85($s0)
    ctx->pc = 0x3e5c90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e5c94: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3e5c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e5c98: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5C98u;
    {
        const bool branch_taken_0x3e5c98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5c98) {
            ctx->pc = 0x3E5CA8u;
            goto label_3e5ca8;
        }
    }
    ctx->pc = 0x3E5CA0u;
    // 0x3e5ca0: 0xa2000085  sb          $zero, 0x85($s0)
    ctx->pc = 0x3e5ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5ca4: 0x0  nop
    ctx->pc = 0x3e5ca4u;
    // NOP
label_3e5ca8:
    // 0x3e5ca8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3e5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x3e5cac: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5cb0: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5cb4: 0x34649090  ori         $a0, $v1, 0x9090
    ctx->pc = 0x3e5cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5cb8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3e5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e5cbc: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x3e5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x3e5cc0: 0xa2030080  sb          $v1, 0x80($s0)
    ctx->pc = 0x3e5cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5cc4: 0x0  nop
    ctx->pc = 0x3e5cc4u;
    // NOP
label_3e5cc8:
    // 0x3e5cc8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e5cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e5ccc: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e5cd0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3e5cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3e5cd4: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x3E5CD4u;
    {
        const bool branch_taken_0x3e5cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5cd4) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5CDCu;
    // 0x3e5cdc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3e5cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x3e5ce0: 0x3c028090  lui         $v0, 0x8090
    ctx->pc = 0x3e5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5ce4: 0x34429090  ori         $v0, $v0, 0x9090
    ctx->pc = 0x3e5ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37008);
    // 0x3e5ce8: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5cec: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x3e5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x3e5cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5cf4: 0xc0f9f74  jal         func_3E7DD0
    ctx->pc = 0x3E5CF4u;
    SET_GPR_U32(ctx, 31, 0x3E5CFCu);
    ctx->pc = 0x3E5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5CF4u;
    // 0x3e5cf8: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7DD0u, 0x3E5CF4u, 0x3E5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5CFCu;
label_3e5cfc:
    // 0x3e5cfc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5CFCu;
    {
        const bool branch_taken_0x3e5cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5cfc) {
            ctx->pc = 0x3E5D50u;
            goto label_3e5d50;
        }
    }
    ctx->pc = 0x3E5D04u;
    // 0x3e5d04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5d08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5d0c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5d10: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5d14: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x3e5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x3e5d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d1c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5d28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5d2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d30: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5D30u;
    SET_GPR_U32(ctx, 31, 0x3E5D38u);
    ctx->pc = 0x3E5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D30u;
    // 0x3e5d34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5D30u, 0x3E5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D38u;
label_3e5d38:
    // 0x3e5d38: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3e5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e5d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d40: 0xc0f9f18  jal         func_3E7C60
    ctx->pc = 0x3E5D40u;
    SET_GPR_U32(ctx, 31, 0x3E5D48u);
    ctx->pc = 0x3E5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D40u;
    // 0x3e5d44: 0xa2020080  sb          $v0, 0x80($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7C60u, 0x3E5D40u, 0x3E5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D48u;
label_3e5d48:
    // 0x3e5d48: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3E5D48u;
    {
        const bool branch_taken_0x3e5d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5d48) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5D50u;
label_3e5d50:
    // 0x3e5d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5d54: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5d58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5d5c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3e5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3e5d60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d68: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d7c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5D7Cu;
    SET_GPR_U32(ctx, 31, 0x3E5D84u);
    ctx->pc = 0x3E5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D7Cu;
    // 0x3e5d80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5D7Cu, 0x3E5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D84u;
label_3e5d84:
    // 0x3e5d84: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3e5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e5d88: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x3E5D88u;
    {
        const bool branch_taken_0x3e5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D88u;
        // 0x3e5d8c: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d88) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5D90u;
label_3e5d90:
    // 0x3e5d90: 0x8203005d  lb          $v1, 0x5D($s0)
    ctx->pc = 0x3e5d90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x3e5d94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e5d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5d98: 0x1066001f  beq         $v1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5D98u;
    {
        const bool branch_taken_0x3e5d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3e5d98) {
            ctx->pc = 0x3E5E18u;
            goto label_3e5e18;
        }
    }
    ctx->pc = 0x3E5DA0u;
    // 0x3e5da0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5DA0u;
    {
        const bool branch_taken_0x3e5da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5da0) {
            ctx->pc = 0x3E5DB0u;
            goto label_3e5db0;
        }
    }
    ctx->pc = 0x3E5DA8u;
    // 0x3e5da8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3E5DA8u;
    {
        const bool branch_taken_0x3e5da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5da8) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5DB0u;
label_3e5db0:
    // 0x3e5db0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x3e5db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3e5db4: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x3e5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x3e5db8: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x3e5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x3e5dbc: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x3e5dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5dc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3e5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e5dc4: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x3e5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x3e5dc8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x3e5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3e5dcc: 0x1483005c  bne         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x3E5DCCu;
    {
        const bool branch_taken_0x3e5dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e5dcc) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5DD4u;
    // 0x3e5dd4: 0x82040085  lb          $a0, 0x85($s0)
    ctx->pc = 0x3e5dd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e5dd8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5ddc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3e5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3e5de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e5de4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e5de8: 0x24630146  addiu       $v1, $v1, 0x146
    ctx->pc = 0x3e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 326));
    // 0x3e5dec: 0xa423f964  sh          $v1, -0x69C($at)
    ctx->pc = 0x3e5decu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965604), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5df0: 0x82040085  lb          $a0, 0x85($s0)
    ctx->pc = 0x3e5df0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 133)));
    // 0x3e5df4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e5df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e5df8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3e5df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3e5dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e5e00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e5e04: 0x24630146  addiu       $v1, $v1, 0x146
    ctx->pc = 0x3e5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 326));
    // 0x3e5e08: 0xa423f97c  sh          $v1, -0x684($at)
    ctx->pc = 0x3e5e08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965628), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5e0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3E5E0Cu;
    {
        const bool branch_taken_0x3e5e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E0Cu;
        // 0x3e5e10: 0xa206005d  sb          $a2, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e0c) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5E14u;
    // 0x3e5e14: 0x0  nop
    ctx->pc = 0x3e5e14u;
    // NOP
label_3e5e18:
    // 0x3e5e18: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x3e5e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3e5e1c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3e5e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3e5e20: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e5e24: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x3e5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e5e28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3e5e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e5e2c: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x3e5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x3e5e30: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x3e5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3e5e34: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3E5E34u;
    {
        const bool branch_taken_0x3e5e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e5e34) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5E3Cu;
    // 0x3e5e3c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x3e5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x3e5e40: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5e44: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e5e48: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3E5E48u;
    {
        const bool branch_taken_0x3e5e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E48u;
        // 0x3e5e4c: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e48) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5E50u;
label_3e5e50:
    // 0x3e5e50: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3e5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3e5e54: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x3e5e54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e5e58: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E5E58u;
    {
        const bool branch_taken_0x3e5e58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E58u;
        // 0x3e5e5c: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e58) {
            ctx->pc = 0x3E5EB0u;
            goto label_3e5eb0;
        }
    }
    ctx->pc = 0x3E5E60u;
    // 0x3e5e60: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3e5e64: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x3e5e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x3e5e68: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3E5E68u;
    {
        const bool branch_taken_0x3e5e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5e68) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5E70u;
    // 0x3e5e70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5e74: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5e78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5e7c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5e80: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e5e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e88: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5e94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5e98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e9c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5E9Cu;
    SET_GPR_U32(ctx, 31, 0x3E5EA4u);
    ctx->pc = 0x3E5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5E9Cu;
    // 0x3e5ea0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5E9Cu, 0x3E5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5EA4u;
label_3e5ea4:
    // 0x3e5ea4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5ea8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3E5EA8u;
    {
        const bool branch_taken_0x3e5ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EA8u;
        // 0x3e5eac: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5ea8) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5EB0u;
label_3e5eb0:
    // 0x3e5eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5eb4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3E5EB4u;
    {
        const bool branch_taken_0x3e5eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EB4u;
        // 0x3e5eb8: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5eb4) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5EBCu;
    // 0x3e5ebc: 0x0  nop
    ctx->pc = 0x3e5ebcu;
    // NOP
label_3e5ec0:
    // 0x3e5ec0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3e5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3e5ec4: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x3e5ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e5ec8: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E5EC8u;
    {
        const bool branch_taken_0x3e5ec8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EC8u;
        // 0x3e5ecc: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5ec8) {
            ctx->pc = 0x3E5F38u;
            goto label_3e5f38;
        }
    }
    ctx->pc = 0x3E5ED0u;
    // 0x3e5ed0: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3e5ed4: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x3e5ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x3e5ed8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E5ED8u;
    {
        const bool branch_taken_0x3e5ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5ed8) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5EE0u;
    // 0x3e5ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5ee4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5ee8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e5eec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e5eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5ef0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e5ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ef8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e5efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e5efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f0c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E5F0Cu;
    SET_GPR_U32(ctx, 31, 0x3E5F14u);
    ctx->pc = 0x3E5F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5F0Cu;
    // 0x3e5f10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E5F0Cu, 0x3E5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5F14u;
label_3e5f14:
    // 0x3e5f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5f18: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3e5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3e5f1c: 0xa2020080  sb          $v0, 0x80($s0)
    ctx->pc = 0x3e5f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e5f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e5f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f24: 0xc049590  jal         func_125640
    ctx->pc = 0x3E5F24u;
    SET_GPR_U32(ctx, 31, 0x3E5F2Cu);
    ctx->pc = 0x3E5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5F24u;
    // 0x3e5f28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E5F24u, 0x3E5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5F2Cu;
label_3e5f2c:
    // 0x3e5f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E5F2Cu;
    {
        const bool branch_taken_0x3e5f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5f2c) {
            ctx->pc = 0x3E5F40u;
            goto label_3e5f40;
        }
    }
    ctx->pc = 0x3E5F34u;
    // 0x3e5f34: 0x0  nop
    ctx->pc = 0x3e5f34u;
    // NOP
label_3e5f38:
    // 0x3e5f38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5f3c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x3e5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_3e5f40:
    // 0x3e5f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e5f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5f44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e5f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5f48: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F48u;
        // 0x3e5f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5F50u;
}
