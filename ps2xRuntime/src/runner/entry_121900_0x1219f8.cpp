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

// Function: entry_121900
// Address: 0x121900 - 0x1219f8
void entry_121900_0x1219f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_121900_0x1219f8");
#endif

    switch (ctx->pc) {
        case 0x12190cu: goto label_12190c;
        case 0x121930u: goto label_121930;
        case 0x121960u: goto label_121960;
        case 0x121974u: goto label_121974;
        case 0x1219a4u: goto label_1219a4;
        case 0x1219b4u: goto label_1219b4;
        default: break;
    }

    ctx->pc = 0x121900u;

    // 0x121900: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x121900u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x121904: 0xc04380c  jal         func_10E030
    ctx->pc = 0x121904u;
    SET_GPR_U32(ctx, 31, 0x12190Cu);
    ctx->pc = 0x121908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121904u;
    // 0x121908: 0x8ea45d4c  lw          $a0, 0x5D4C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E030u, 0x121904u, 0x12190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12190Cu;
label_12190c:
    // 0x12190c: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x12190Cu;
    {
        const bool branch_taken_0x12190c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x121910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12190Cu;
        // 0x121910: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12190c) {
            ctx->pc = 0x1219C8u;
            goto label_1219c8;
        }
    }
    ctx->pc = 0x121914u;
    // 0x121914: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121914u;
    {
        const bool branch_taken_0x121914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x121914) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x12191Cu;
    // 0x12191c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x12191cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x121920: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121920u;
    {
        const bool branch_taken_0x121920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121920u;
        // 0x121924: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121920) {
            ctx->pc = 0x121938u;
            goto label_121938;
        }
    }
    ctx->pc = 0x121928u;
label_121928:
    // 0x121928: 0xc043800  jal         func_10E000
    ctx->pc = 0x121928u;
    SET_GPR_U32(ctx, 31, 0x121930u);
    ctx->pc = 0x12192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121928u;
    // 0x12192c: 0x8ea45d4c  lw          $a0, 0x5D4C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x121928u, 0x121930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121930u;
label_121930:
    // 0x121930: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x121930u;
    {
        const bool branch_taken_0x121930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121930u;
        // 0x121934: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121930) {
            ctx->pc = 0x1219C8u;
            goto label_1219c8;
        }
    }
    ctx->pc = 0x121938u;
label_121938:
    // 0x121938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12193c: 0x245044f0  addiu       $s0, $v0, 0x44F0
    ctx->pc = 0x12193cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17648));
    // 0x121940: 0xac5644f0  sw          $s6, 0x44F0($v0)
    ctx->pc = 0x121940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17648), GPR_U32(ctx, 22));
    // 0x121944: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x121944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x121948: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x121948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12194c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x12194cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x121950: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x121950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x121954: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x121954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x121958: 0xc04a040  jal         func_128100
    ctx->pc = 0x121958u;
    SET_GPR_U32(ctx, 31, 0x121960u);
    ctx->pc = 0x12195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121958u;
    // 0x12195c: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x121958u, 0x121960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121960u;
label_121960:
    // 0x121960: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x121960u;
    {
        const bool branch_taken_0x121960 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x121964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121960u;
        // 0x121964: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121960) {
            ctx->pc = 0x121974u;
            goto label_121974;
        }
    }
    ctx->pc = 0x121968u;
    // 0x121968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12196c: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x12196Cu;
    SET_GPR_U32(ctx, 31, 0x121974u);
    ctx->pc = 0x121970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12196Cu;
    // 0x121970: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x12196Cu, 0x121974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121974u;
label_121974:
    // 0x121974: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x121974u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x121978: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x121978u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x12197c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121980: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x121980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121984: 0x25295a00  addiu       $t1, $t1, 0x5A00
    ctx->pc = 0x121984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23040));
    // 0x121988: 0x256b0dc8  addiu       $t3, $t3, 0xDC8
    ctx->pc = 0x121988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3528));
    // 0x12198c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x121990: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x121990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x121994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121998: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x12199c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x12199Cu;
    SET_GPR_U32(ctx, 31, 0x1219A4u);
    ctx->pc = 0x1219A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12199Cu;
    // 0x1219a0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x12199Cu, 0x1219A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A4u;
label_1219a4:
    // 0x1219a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1219A4u;
    {
        const bool branch_taken_0x1219a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219A4u;
        // 0x1219a8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219a4) {
            ctx->pc = 0x1219BCu;
            goto label_1219bc;
        }
    }
    ctx->pc = 0x1219ACu;
    // 0x1219ac: 0xc043800  jal         func_10E000
    ctx->pc = 0x1219ACu;
    SET_GPR_U32(ctx, 31, 0x1219B4u);
    ctx->pc = 0x1219B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219ACu;
    // 0x1219b0: 0x8ea45d4c  lw          $a0, 0x5D4C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x1219ACu, 0x1219B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219B4u;
label_1219b4:
    // 0x1219b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1219B4u;
    {
        const bool branch_taken_0x1219b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219B4u;
        // 0x1219b8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219b4) {
            ctx->pc = 0x1219C8u;
            goto label_1219c8;
        }
    }
    ctx->pc = 0x1219BCu;
label_1219bc:
    // 0x1219bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1219bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1219c0: 0xac625d48  sw          $v0, 0x5D48($v1)
    ctx->pc = 0x1219c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x405D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x405D48u, _value); } while (0);
    // 0x1219c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1219c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1219c8:
    // 0x1219c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1219c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1219cc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1219ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1219d0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1219d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1219d4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1219d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1219d8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1219d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1219dc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1219dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1219e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1219e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1219e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1219e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1219e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1219e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1219ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1219ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1219F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219ECu;
        // 0x1219f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1219ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1219F4u;
    // 0x1219f4: 0x0  nop
    ctx->pc = 0x1219f4u;
    // NOP
    ctx->pc = 0x1219f8u;
}
