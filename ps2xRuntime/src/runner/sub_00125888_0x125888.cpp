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

// Function: sub_00125888
// Address: 0x125888 - 0x12598c
void sub_00125888_0x125888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125888_0x125888");
#endif

    switch (ctx->pc) {
        case 0x1258bcu: goto label_1258bc;
        case 0x125928u: goto label_125928;
        case 0x125944u: goto label_125944;
        case 0x125950u: goto label_125950;
        default: break;
    }

    ctx->pc = 0x125888u;

    // 0x125888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12588c: 0x24aa0014  addiu       $t2, $a1, 0x14
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x125890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125894: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x125894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125898: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12589c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1258a0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1258a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1258a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1258a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1258a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1258acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1258b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1258b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1258b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1258b8: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x1258b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1258bc:
    // 0x1258bc: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1258c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1258c4: 0x132582a  slt         $t3, $t1, $s2
    ctx->pc = 0x1258c4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1258c8: 0x31afffff  andi        $t7, $t5, 0xFFFF
    ctx->pc = 0x1258c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1258cc: 0x1e67818  mult        $t7, $t7, $a2
    ctx->pc = 0x1258ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1258d0: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1258d4: 0x71a66818  mult1       $t5, $t5, $a2
    ctx->pc = 0x1258d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1258d8: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1258dc: 0xf6402  srl         $t4, $t7, 16
    ctx->pc = 0x1258dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1258e0: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1258e4: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x1258e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x1258e8: 0xd7400  sll         $t6, $t5, 16
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x1258ec: 0xd8c02  srl         $s1, $t5, 16
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1258f0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1258f4: 0xad4e0000  sw          $t6, 0x0($t2)
    ctx->pc = 0x1258f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 14));
    // 0x1258f8: 0x1560fff0  bnez        $t3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1258F8u;
    {
        const bool branch_taken_0x1258f8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1258FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258F8u;
        // 0x1258fc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258f8) {
            ctx->pc = 0x1258BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1258bc;
        }
    }
    ctx->pc = 0x125900u;
    // 0x125900: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x125900u;
    {
        const bool branch_taken_0x125900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125900u;
        // 0x125904: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125900) {
            ctx->pc = 0x12596Cu;
            goto label_12596c;
        }
    }
    ctx->pc = 0x125908u;
    // 0x125908: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x125908u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12590c: 0x24f782a  slt         $t7, $s2, $t7
    ctx->pc = 0x12590cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x125910: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x125910u;
    {
        const bool branch_taken_0x125910 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125910u;
        // 0x125914: 0x127880  sll         $t7, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125910) {
            ctx->pc = 0x125958u;
            goto label_125958;
        }
    }
    ctx->pc = 0x125918u;
    // 0x125918: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12591c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125920: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x125920u;
    SET_GPR_U32(ctx, 31, 0x125928u);
    ctx->pc = 0x125924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125920u;
    // 0x125924: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x125920u, 0x125928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125928u;
label_125928:
    // 0x125928: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x125928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12592c: 0x2665000c  addiu       $a1, $s3, 0xC
    ctx->pc = 0x12592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x125930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125934: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x125934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x125938: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12593c: 0xc049522  jal         func_125488
    ctx->pc = 0x12593Cu;
    SET_GPR_U32(ctx, 31, 0x125944u);
    ctx->pc = 0x125940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12593Cu;
    // 0x125940: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x12593Cu, 0x125944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125944u;
label_125944:
    // 0x125944: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125948: 0xc049616  jal         func_125858
    ctx->pc = 0x125948u;
    SET_GPR_U32(ctx, 31, 0x125950u);
    ctx->pc = 0x12594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125948u;
    // 0x12594c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x125948u, 0x125950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125950u;
label_125950:
    // 0x125950: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x125950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125954: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x125954u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_125958:
    // 0x125958: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x12595c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x125960: 0xadf10014  sw          $s1, 0x14($t7)
    ctx->pc = 0x125960u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 17));
    // 0x125964: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x125964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x125968: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x125968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12596c:
    // 0x12596c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12596cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125978: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12597c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12597cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125980: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125984: 0x3e00008  jr          $ra
    ctx->pc = 0x125984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125984u;
        // 0x125988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12598Cu;
}
