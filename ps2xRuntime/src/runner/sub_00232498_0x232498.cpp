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

// Function: sub_00232498
// Address: 0x232498 - 0x232600
void sub_00232498_0x232498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232498_0x232498");
#endif

    switch (ctx->pc) {
        case 0x2324d4u: goto label_2324d4;
        case 0x2324ecu: goto label_2324ec;
        case 0x232500u: goto label_232500;
        case 0x232514u: goto label_232514;
        case 0x23252cu: goto label_23252c;
        case 0x23254cu: goto label_23254c;
        default: break;
    }

    ctx->pc = 0x232498u;

    // 0x232498: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x232498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23249c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x23249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2324a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2324a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2324a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2324a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324ac: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2324acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2324b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2324b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2324b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2324b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2324B8u;
    {
        const bool branch_taken_0x2324b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2324BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B8u;
        // 0x2324bc: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324b8) {
            ctx->pc = 0x2324C8u;
            goto label_2324c8;
        }
    }
    ctx->pc = 0x2324C0u;
    // 0x2324c0: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2324C0u;
    {
        const bool branch_taken_0x2324c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2324c0) {
            ctx->pc = 0x2324C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2324C0u;
            // 0x2324c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2324E0u;
            goto label_2324e0;
        }
    }
    ctx->pc = 0x2324C8u;
label_2324c8:
    // 0x2324c8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2324c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2324cc: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x2324CCu;
    SET_GPR_U32(ctx, 31, 0x2324D4u);
    ctx->pc = 0x2324D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324CCu;
    // 0x2324d0: 0x2484aa40  addiu       $a0, $a0, -0x55C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x2324CCu, 0x2324D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324D4u;
label_2324d4:
    // 0x2324d4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2324D4u;
    {
        const bool branch_taken_0x2324d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2324D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324D4u;
        // 0x2324d8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324d4) {
            ctx->pc = 0x2325E8u;
            goto label_2325e8;
        }
    }
    ctx->pc = 0x2324DCu;
    // 0x2324dc: 0x0  nop
    ctx->pc = 0x2324dcu;
    // NOP
label_2324e0:
    // 0x2324e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2324e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324e4: 0xc049590  jal         func_125640
    ctx->pc = 0x2324E4u;
    SET_GPR_U32(ctx, 31, 0x2324ECu);
    ctx->pc = 0x2324E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324E4u;
    // 0x2324e8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2324E4u, 0x2324ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324ECu;
label_2324ec:
    // 0x2324ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2324ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324f0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2324f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2324f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2324f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2324f8: 0xc049590  jal         func_125640
    ctx->pc = 0x2324F8u;
    SET_GPR_U32(ctx, 31, 0x232500u);
    ctx->pc = 0x2324FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324F8u;
    // 0x2324fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2324F8u, 0x232500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232500u;
label_232500:
    // 0x232500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x232504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232508: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x232508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23250c: 0xc08c85a  jal         func_232168
    ctx->pc = 0x23250Cu;
    SET_GPR_U32(ctx, 31, 0x232514u);
    ctx->pc = 0x232510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23250Cu;
    // 0x232510: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232168u, 0x23250Cu, 0x232514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232514u;
label_232514:
    // 0x232514: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x232514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232518: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x232518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23251c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23251Cu;
    {
        const bool branch_taken_0x23251c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23251Cu;
        // 0x232520: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23251c) {
            ctx->pc = 0x232538u;
            goto label_232538;
        }
    }
    ctx->pc = 0x232524u;
    // 0x232524: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x232524u;
    SET_GPR_U32(ctx, 31, 0x23252Cu);
    ctx->pc = 0x232528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232524u;
    // 0x232528: 0x2484aa78  addiu       $a0, $a0, -0x5588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x232524u, 0x23252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23252Cu;
label_23252c:
    // 0x23252c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x23252Cu;
    {
        const bool branch_taken_0x23252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23252Cu;
        // 0x232530: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23252c) {
            ctx->pc = 0x2325E8u;
            goto label_2325e8;
        }
    }
    ctx->pc = 0x232534u;
    // 0x232534: 0x0  nop
    ctx->pc = 0x232534u;
    // NOP
label_232538:
    // 0x232538: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232538u;
    {
        const bool branch_taken_0x232538 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x232538) {
            ctx->pc = 0x23253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232538u;
            // 0x23253c: 0x83a3005c  lb          $v1, 0x5C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232558u;
            goto label_232558;
        }
    }
    ctx->pc = 0x232540u;
    // 0x232540: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232544: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x232544u;
    SET_GPR_U32(ctx, 31, 0x23254Cu);
    ctx->pc = 0x232548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232544u;
    // 0x232548: 0x2484aab8  addiu       $a0, $a0, -0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x232544u, 0x23254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23254Cu;
label_23254c:
    // 0x23254c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x23254Cu;
    {
        const bool branch_taken_0x23254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23254Cu;
        // 0x232550: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23254c) {
            ctx->pc = 0x2325E8u;
            goto label_2325e8;
        }
    }
    ctx->pc = 0x232554u;
    // 0x232554: 0x0  nop
    ctx->pc = 0x232554u;
    // NOP
label_232558:
    // 0x232558: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x232558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23255c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23255Cu;
    {
        const bool branch_taken_0x23255c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23255c) {
            ctx->pc = 0x232560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23255Cu;
            // 0x232560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232568u;
            goto label_232568;
        }
    }
    ctx->pc = 0x232564u;
    // 0x232564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_232568:
    // 0x232568: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x232568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23256c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x23256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x232570: 0x83a30023  lb          $v1, 0x23($sp)
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x232574: 0x83a40022  lb          $a0, 0x22($sp)
    ctx->pc = 0x232574u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x232578: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23257c: 0x87a6002e  lh          $a2, 0x2E($sp)
    ctx->pc = 0x23257cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x232580: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x232580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x232584: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x232588: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x232588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x23258c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23258cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x232590: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x232590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x232594: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x232594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x232598: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x232598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x23259c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x23259cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x2325a0: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x2325a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x2325a4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2325a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2325a8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2325a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2325ac: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2325acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2325b0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2325b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2325b4: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x2325b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2325b8: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x2325b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2325bc: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x2325bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2325c0: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x2325c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2325c4: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x2325c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325c8: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x2325c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325cc: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x2325ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325d0: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x2325d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325d4: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x2325d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325d8: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x2325d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325dc: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x2325dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325e0: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x2325e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2325e4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2325e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2325e8:
    // 0x2325e8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2325e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2325ec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2325f0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2325f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2325f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2325f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2325f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2325F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2325FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325F8u;
        // 0x2325fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2325F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232600u;
}
