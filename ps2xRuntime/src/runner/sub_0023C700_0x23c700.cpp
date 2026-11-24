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

// Function: sub_0023C700
// Address: 0x23c700 - 0x23c7f8
void sub_0023C700_0x23c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C700_0x23c700");
#endif

    switch (ctx->pc) {
        case 0x23c730u: goto label_23c730;
        case 0x23c740u: goto label_23c740;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c784u: goto label_23c784;
        case 0x23c794u: goto label_23c794;
        case 0x23c7e0u: goto label_23c7e0;
        default: break;
    }

    ctx->pc = 0x23c700u;

    // 0x23c700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c704: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23c708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c70c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x23c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x23c710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c714: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23c718: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23c718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c71c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C71Cu;
    {
        const bool branch_taken_0x23c71c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C71Cu;
        // 0x23c720: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c71c) {
            ctx->pc = 0x23C738u;
            goto label_23c738;
        }
    }
    ctx->pc = 0x23C724u;
    // 0x23c724: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c728: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23C728u;
    SET_GPR_U32(ctx, 31, 0x23C730u);
    ctx->pc = 0x23C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C728u;
    // 0x23c72c: 0x2484b768  addiu       $a0, $a0, -0x4898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23C728u, 0x23C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C730u;
label_23c730:
    // 0x23c730: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x23C730u;
    {
        const bool branch_taken_0x23c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C730u;
        // 0x23c734: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c730) {
            ctx->pc = 0x23C7E4u;
            goto label_23c7e4;
        }
    }
    ctx->pc = 0x23C738u;
label_23c738:
    // 0x23c738: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x23C738u;
    SET_GPR_U32(ctx, 31, 0x23C740u);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23C738u, 0x23C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C740u;
label_23c740:
    // 0x23c740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c744: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x23c744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23c748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23c748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c74c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23c750: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x23c750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x23c754: 0xc08c5b2  jal         func_2316C8
    ctx->pc = 0x23C754u;
    SET_GPR_U32(ctx, 31, 0x23C75Cu);
    ctx->pc = 0x23C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C754u;
    // 0x23c758: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316C8u, 0x23C754u, 0x23C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C75Cu;
label_23c75c:
    // 0x23c75c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x23C75Cu;
    {
        const bool branch_taken_0x23c75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c75c) {
            ctx->pc = 0x23C760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C75Cu;
            // 0x23c760: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C7E4u;
            goto label_23c7e4;
        }
    }
    ctx->pc = 0x23C764u;
    // 0x23c764: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23c768: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x23C768u;
    {
        const bool branch_taken_0x23c768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c768) {
            ctx->pc = 0x23C76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C768u;
            // 0x23c76c: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C7A8u;
            goto label_23c7a8;
        }
    }
    ctx->pc = 0x23C770u;
    // 0x23c770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c774: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23c774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c778: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23c778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c77c: 0xc08bb2a  jal         func_22ECA8
    ctx->pc = 0x23C77Cu;
    SET_GPR_U32(ctx, 31, 0x23C784u);
    ctx->pc = 0x23C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C77Cu;
    // 0x23c780: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECA8u, 0x23C77Cu, 0x23C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C784u;
label_23c784:
    // 0x23c784: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c788: 0x2484b798  addiu       $a0, $a0, -0x4868
    ctx->pc = 0x23c788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948760));
    // 0x23c78c: 0xc08bac2  jal         func_22EB08
    ctx->pc = 0x23C78Cu;
    SET_GPR_U32(ctx, 31, 0x23C794u);
    ctx->pc = 0x23C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C78Cu;
    // 0x23c790: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x23C78Cu, 0x23C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C794u;
label_23c794:
    // 0x23c794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c798: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23c79c: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x23c79cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x23c7a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23C7A0u;
    {
        const bool branch_taken_0x23c7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7A0u;
        // 0x23c7a4: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7a0) {
            ctx->pc = 0x23C7E0u;
            goto label_23c7e0;
        }
    }
    ctx->pc = 0x23C7A8u;
label_23c7a8:
    // 0x23c7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c7ac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23c7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23c7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7bc: 0x8e0800b0  lw          $t0, 0xB0($s0)
    ctx->pc = 0x23c7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23c7c0: 0xae0700b8  sw          $a3, 0xB8($s0)
    ctx->pc = 0x23c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 7));
    // 0x23c7c4: 0xae0800b4  sw          $t0, 0xB4($s0)
    ctx->pc = 0x23c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 8));
    // 0x23c7c8: 0xae0600bc  sw          $a2, 0xBC($s0)
    ctx->pc = 0x23c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 6));
    // 0x23c7cc: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x23c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x23c7d0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x23c7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x23c7d4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x23c7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x23c7d8: 0xc08efaa  jal         func_23BEA8
    ctx->pc = 0x23C7D8u;
    SET_GPR_U32(ctx, 31, 0x23C7E0u);
    ctx->pc = 0x23C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7D8u;
    // 0x23c7dc: 0xa20200ac  sb          $v0, 0xAC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEA8u, 0x23C7D8u, 0x23C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7E0u;
label_23c7e0:
    // 0x23c7e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23c7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23c7e4:
    // 0x23c7e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x23c7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c7e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23c7e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c7ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23c7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23c7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23C7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7F0u;
        // 0x23c7f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C7F8u;
}
