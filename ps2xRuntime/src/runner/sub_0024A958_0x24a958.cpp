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

// Function: sub_0024A958
// Address: 0x24a958 - 0x24aab8
void sub_0024A958_0x24a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A958_0x24a958");
#endif

    switch (ctx->pc) {
        case 0x24a988u: goto label_24a988;
        case 0x24a994u: goto label_24a994;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9b4u: goto label_24a9b4;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9d8u: goto label_24a9d8;
        case 0x24a9e4u: goto label_24a9e4;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa18u: goto label_24aa18;
        case 0x24aa38u: goto label_24aa38;
        case 0x24aa4cu: goto label_24aa4c;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa98u: goto label_24aa98;
        default: break;
    }

    ctx->pc = 0x24a958u;

    // 0x24a958: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x24a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x24a95c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24a960: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x24a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x24a964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a968: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x24a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x24a96c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24a96cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a974: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x24a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x24a978: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x24a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x24a97c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x24a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x24a980: 0xc049590  jal         func_125640
    ctx->pc = 0x24A980u;
    SET_GPR_U32(ctx, 31, 0x24A988u);
    ctx->pc = 0x24A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A980u;
    // 0x24a984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24A980u, 0x24A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A988u;
label_24a988:
    // 0x24a988: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24a988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a98c: 0xc092966  jal         func_24A598
    ctx->pc = 0x24A98Cu;
    SET_GPR_U32(ctx, 31, 0x24A994u);
    ctx->pc = 0x24A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A98Cu;
    // 0x24a990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A598u, 0x24A98Cu, 0x24A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A994u;
label_24a994:
    // 0x24a994: 0xc091a44  jal         func_246910
    ctx->pc = 0x24A994u;
    SET_GPR_U32(ctx, 31, 0x24A99Cu);
    ctx->pc = 0x24A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A994u;
    // 0x24a998: 0x24046000  addiu       $a0, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24A994u, 0x24A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A99Cu;
label_24a99c:
    // 0x24a99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a9a0: 0xc091b08  jal         func_246C20
    ctx->pc = 0x24A9A0u;
    SET_GPR_U32(ctx, 31, 0x24A9A8u);
    ctx->pc = 0x24A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9A0u;
    // 0x24a9a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C20u, 0x24A9A0u, 0x24A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9A8u;
label_24a9a8:
    // 0x24a9a8: 0x24046001  addiu       $a0, $zero, 0x6001
    ctx->pc = 0x24a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24577));
    // 0x24a9ac: 0xc091a44  jal         func_246910
    ctx->pc = 0x24A9ACu;
    SET_GPR_U32(ctx, 31, 0x24A9B4u);
    ctx->pc = 0x24A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9ACu;
    // 0x24a9b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24A9ACu, 0x24A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9B4u;
label_24a9b4:
    // 0x24a9b4: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x24a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x24a9b8: 0x6400038  bltz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x24A9B8u;
    {
        const bool branch_taken_0x24a9b8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x24A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9B8u;
        // 0x24a9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9b8) {
            ctx->pc = 0x24AA9Cu;
            goto label_24aa9c;
        }
    }
    ctx->pc = 0x24A9C0u;
    // 0x24a9c0: 0xc091a44  jal         func_246910
    ctx->pc = 0x24A9C0u;
    SET_GPR_U32(ctx, 31, 0x24A9C8u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24A9C0u, 0x24A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9C8u;
label_24a9c8:
    // 0x24a9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9d0: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x24A9D0u;
    SET_GPR_U32(ctx, 31, 0x24A9D8u);
    ctx->pc = 0x24A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9D0u;
    // 0x24a9d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x24A9D0u, 0x24A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9D8u;
label_24a9d8:
    // 0x24a9d8: 0x24046101  addiu       $a0, $zero, 0x6101
    ctx->pc = 0x24a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24833));
    // 0x24a9dc: 0xc091a44  jal         func_246910
    ctx->pc = 0x24A9DCu;
    SET_GPR_U32(ctx, 31, 0x24A9E4u);
    ctx->pc = 0x24A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9DCu;
    // 0x24a9e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24A9DCu, 0x24A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9E4u;
label_24a9e4:
    // 0x24a9e4: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x24a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x24a9e8: 0x620002c  bltz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x24A9E8u;
    {
        const bool branch_taken_0x24a9e8 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x24A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9E8u;
        // 0x24a9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9e8) {
            ctx->pc = 0x24AA9Cu;
            goto label_24aa9c;
        }
    }
    ctx->pc = 0x24A9F0u;
    // 0x24a9f0: 0xc091a44  jal         func_246910
    ctx->pc = 0x24A9F0u;
    SET_GPR_U32(ctx, 31, 0x24A9F8u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24A9F0u, 0x24A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9F8u;
label_24a9f8:
    // 0x24a9f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa00: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x24AA00u;
    SET_GPR_U32(ctx, 31, 0x24AA08u);
    ctx->pc = 0x24AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA00u;
    // 0x24aa04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x24AA00u, 0x24AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA08u;
label_24aa08:
    // 0x24aa08: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x24aa08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24aa0c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x24aa0cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x24aa10: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA10u;
    SET_GPR_U32(ctx, 31, 0x24AA18u);
    ctx->pc = 0x24AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA10u;
    // 0x24aa14: 0x24046201  addiu       $a0, $zero, 0x6201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25089));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA10u, 0x24AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA18u;
label_24aa18:
    // 0x24aa18: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x24aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x24aa1c: 0x2a231001  slti        $v1, $s1, 0x1001
    ctx->pc = 0x24aa1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x24aa20: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x24aa20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x24aa24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24aa24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa28: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24AA28u;
    {
        const bool branch_taken_0x24aa28 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x24AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA28u;
        // 0x24aa2c: 0x24046300  addiu       $a0, $zero, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa28) {
            ctx->pc = 0x24AA9Cu;
            goto label_24aa9c;
        }
    }
    ctx->pc = 0x24AA30u;
    // 0x24aa30: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA30u;
    SET_GPR_U32(ctx, 31, 0x24AA38u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA30u, 0x24AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA38u;
label_24aa38:
    // 0x24aa38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa3c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x24aa3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x24aa40: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x24aa40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x24aa44: 0xc091b38  jal         func_246CE0
    ctx->pc = 0x24AA44u;
    SET_GPR_U32(ctx, 31, 0x24AA4Cu);
    ctx->pc = 0x24AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA44u;
    // 0x24aa48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CE0u, 0x24AA44u, 0x24AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA4Cu;
label_24aa4c:
    // 0x24aa4c: 0x24046301  addiu       $a0, $zero, 0x6301
    ctx->pc = 0x24aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25345));
    // 0x24aa50: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA50u;
    SET_GPR_U32(ctx, 31, 0x24AA58u);
    ctx->pc = 0x24AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA50u;
    // 0x24aa54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA50u, 0x24AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA58u;
label_24aa58:
    // 0x24aa58: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AA58u;
    {
        const bool branch_taken_0x24aa58 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x24AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA58u;
        // 0x24aa5c: 0x24046500  addiu       $a0, $zero, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa58) {
            ctx->pc = 0x24AA80u;
            goto label_24aa80;
        }
    }
    ctx->pc = 0x24AA60u;
    // 0x24aa60: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA60u;
    SET_GPR_U32(ctx, 31, 0x24AA68u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA60u, 0x24AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA68u;
label_24aa68:
    // 0x24aa68: 0xc091b22  jal         func_246C88
    ctx->pc = 0x24AA68u;
    SET_GPR_U32(ctx, 31, 0x24AA70u);
    ctx->pc = 0x24AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA68u;
    // 0x24aa6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x24AA68u, 0x24AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA70u;
label_24aa70:
    // 0x24aa70: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA70u;
    SET_GPR_U32(ctx, 31, 0x24AA78u);
    ctx->pc = 0x24AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA70u;
    // 0x24aa74: 0x24046501  addiu       $a0, $zero, 0x6501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25857));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA70u, 0x24AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA78u;
label_24aa78:
    // 0x24aa78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24AA78u;
    {
        const bool branch_taken_0x24aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA78u;
        // 0x24aa7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa78) {
            ctx->pc = 0x24AA9Cu;
            goto label_24aa9c;
        }
    }
    ctx->pc = 0x24AA80u;
label_24aa80:
    // 0x24aa80: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA80u;
    SET_GPR_U32(ctx, 31, 0x24AA88u);
    ctx->pc = 0x24AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA80u;
    // 0x24aa84: 0x24046400  addiu       $a0, $zero, 0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA80u, 0x24AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA88u;
label_24aa88:
    // 0x24aa88: 0xc091b22  jal         func_246C88
    ctx->pc = 0x24AA88u;
    SET_GPR_U32(ctx, 31, 0x24AA90u);
    ctx->pc = 0x24AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA88u;
    // 0x24aa8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x24AA88u, 0x24AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA90u;
label_24aa90:
    // 0x24aa90: 0xc091a44  jal         func_246910
    ctx->pc = 0x24AA90u;
    SET_GPR_U32(ctx, 31, 0x24AA98u);
    ctx->pc = 0x24AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA90u;
    // 0x24aa94: 0x24046401  addiu       $a0, $zero, 0x6401 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25601));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24AA90u, 0x24AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA98u;
label_24aa98:
    // 0x24aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24aa9c:
    // 0x24aa9c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x24aa9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24aaa0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x24aaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24aaa4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x24aaa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24aaa8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x24aaa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x24aaac: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x24aaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24aab0: 0x3e00008  jr          $ra
    ctx->pc = 0x24AAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAB0u;
        // 0x24aab4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AAB8u;
}
