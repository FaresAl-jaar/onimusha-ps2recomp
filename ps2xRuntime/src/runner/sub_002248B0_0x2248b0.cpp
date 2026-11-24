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

// Function: sub_002248B0
// Address: 0x2248b0 - 0x224960
void sub_002248B0_0x2248b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002248B0_0x2248b0");
#endif

    switch (ctx->pc) {
        case 0x2248e4u: goto label_2248e4;
        case 0x2248f8u: goto label_2248f8;
        default: break;
    }

    ctx->pc = 0x2248b0u;

    // 0x2248b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2248b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2248b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2248b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2248b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2248b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2248bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2248c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2248c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2248c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2248c8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2248c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2248cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2248ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2248d0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2248d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2248d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2248d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2248d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2248d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2248dc: 0xc089168  jal         func_2245A0
    ctx->pc = 0x2248DCu;
    SET_GPR_U32(ctx, 31, 0x2248E4u);
    ctx->pc = 0x2248E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248DCu;
    // 0x2248e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x2248DCu, 0x2248E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248E4u;
label_2248e4:
    // 0x2248e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2248e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248e8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2248E8u;
    {
        const bool branch_taken_0x2248e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248E8u;
        // 0x2248ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248e8) {
            ctx->pc = 0x224944u;
            goto label_224944;
        }
    }
    ctx->pc = 0x2248F0u;
    // 0x2248f0: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x2248F0u;
    SET_GPR_U32(ctx, 31, 0x2248F8u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x2248F0u, 0x2248F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248F8u;
label_2248f8:
    // 0x2248f8: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x2248f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2248fc: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2248FCu;
    {
        const bool branch_taken_0x2248fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x224900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248FCu;
        // 0x224900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248fc) {
            ctx->pc = 0x224944u;
            goto label_224944;
        }
    }
    ctx->pc = 0x224904u;
    // 0x224904: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x224904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x224908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22490c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x22490cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x224910: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x224910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x224914: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x224914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x224918: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x224918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22491c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x224920: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x224920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x224924: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x224924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x224928: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x224928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22492c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x22492cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x224930: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x224930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x224934: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x224934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x224938: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x224938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22493c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x22493cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x224940: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x224940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_224944:
    // 0x224944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22494c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22494cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224950: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224958: 0x3e00008  jr          $ra
    ctx->pc = 0x224958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224958u;
        // 0x22495c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224960u;
}
