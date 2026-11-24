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

// Function: sub_001276A0
// Address: 0x1276a0 - 0x127740
void sub_001276A0_0x1276a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001276A0_0x1276a0");
#endif

    switch (ctx->pc) {
        case 0x1276a8u: goto label_1276a8;
        case 0x1276f8u: goto label_1276f8;
        default: break;
    }

    ctx->pc = 0x1276a0u;

    // 0x1276a0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1276a4: 0x25e83a90  addiu       $t0, $t7, 0x3A90
    ctx->pc = 0x1276a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
label_1276a8:
    // 0x1276a8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1276a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1276ac: 0x27e00  sll         $t7, $v0, 24
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1276b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1276b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1276b4: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x1276b4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x1276b8: 0x1e86821  addu        $t5, $t7, $t0
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1276bc: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x1276BCu;
    {
        const bool branch_taken_0x1276bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276BCu;
        // 0x1276c0: 0x25ea0020  addiu       $t2, $t7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276bc) {
            ctx->pc = 0x127738u;
            goto label_127738;
        }
    }
    ctx->pc = 0x1276C4u;
    // 0x1276c4: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x1276c4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1276c8: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x1276c8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1276cc: 0x96600  sll         $t4, $t1, 24
    ctx->pc = 0x1276ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1276d0: 0xc6603  sra         $t4, $t4, 24
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 24));
    // 0x1276d4: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x1276d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x1276d8: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x1276d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1276dc: 0x1ed500a  movz        $t2, $t7, $t5
    ctx->pc = 0x1276dcu;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 15));
    // 0x1276e0: 0x916f0000  lbu         $t7, 0x0($t3)
    ctx->pc = 0x1276e0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1276e4: 0x258e0020  addiu       $t6, $t4, 0x20
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1276e8: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1276e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1276ec: 0x18f700a  movz        $t6, $t4, $t7
    ctx->pc = 0x1276ecu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 12));
    // 0x1276f0: 0x114effed  beq         $t2, $t6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1276F0u;
    {
        const bool branch_taken_0x1276f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        ctx->pc = 0x1276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F0u;
        // 0x1276f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f0) {
            ctx->pc = 0x1276A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1276a8;
        }
    }
    ctx->pc = 0x1276F8u;
label_1276f8:
    // 0x1276f8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1276fc: 0x312d00ff  andi        $t5, $t1, 0xFF
    ctx->pc = 0x1276fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x127700: 0x25ef3a90  addiu       $t7, $t7, 0x3A90
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
    // 0x127704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x127704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127708: 0x1af6021  addu        $t4, $t5, $t7
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12770c: 0x244a0020  addiu       $t2, $v0, 0x20
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x127710: 0x4f7821  addu        $t7, $v0, $t7
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x127714: 0x25ab0020  addiu       $t3, $t5, 0x20
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x127718: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x127718u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12771c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12771cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x127720: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x127720u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x127724: 0x14e100b  movn        $v0, $t2, $t6
    ctx->pc = 0x127724u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x127728: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x127728u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12772c: 0x16f680b  movn        $t5, $t3, $t7
    ctx->pc = 0x12772cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 11));
    // 0x127730: 0x3e00008  jr          $ra
    ctx->pc = 0x127730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127730u;
        // 0x127734: 0x4d1023  subu        $v0, $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127738u;
label_127738:
    // 0x127738: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x127738u;
    {
        const bool branch_taken_0x127738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127738u;
        // 0x12773c: 0x90a90000  lbu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127738) {
            ctx->pc = 0x1276F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1276f8;
        }
    }
    ctx->pc = 0x127740u;
}
