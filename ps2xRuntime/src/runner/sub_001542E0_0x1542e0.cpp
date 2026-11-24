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

// Function: sub_001542E0
// Address: 0x1542e0 - 0x1543a0
void sub_001542E0_0x1542e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001542E0_0x1542e0");
#endif

    switch (ctx->pc) {
        case 0x15431cu: goto label_15431c;
        default: break;
    }

    ctx->pc = 0x1542e0u;

    // 0x1542e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1542e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1542e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1542e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1542e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1542e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1542ec: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1542ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1542f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1542f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1542f4: 0x8c24cee0  lw          $a0, -0x3120($at)
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x1542f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1542f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1542fc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1542FCu;
    {
        const bool branch_taken_0x1542fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542FCu;
        // 0x154300: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542fc) {
            ctx->pc = 0x154390u;
            goto label_154390;
        }
    }
    ctx->pc = 0x154304u;
    // 0x154304: 0x8f8485c0  lw          $a0, -0x7A40($gp)
    ctx->pc = 0x154304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x154308: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x154308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15430c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x15430Cu;
    {
        const bool branch_taken_0x15430c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x154310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15430Cu;
        // 0x154310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15430c) {
            ctx->pc = 0x154390u;
            goto label_154390;
        }
    }
    ctx->pc = 0x154314u;
    // 0x154314: 0xc054eec  jal         func_153BB0
    ctx->pc = 0x154314u;
    SET_GPR_U32(ctx, 31, 0x15431Cu);
    ctx->pc = 0x153BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153BB0u, 0x154314u, 0x15431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15431Cu;
label_15431c:
    // 0x15431c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15431Cu;
    {
        const bool branch_taken_0x15431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15431c) {
            ctx->pc = 0x154390u;
            goto label_154390;
        }
    }
    ctx->pc = 0x154324u;
    // 0x154324: 0x8f8985c0  lw          $t1, -0x7A40($gp)
    ctx->pc = 0x154324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x154328: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x154328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x15432c: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x154330: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x154330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x154334: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x154334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x154338: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x154338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15433c: 0x24e7eec4  addiu       $a3, $a3, -0x113C
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962884));
    // 0x154340: 0x24c6eeb0  addiu       $a2, $a2, -0x1150
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962864));
    // 0x154344: 0x24a5eeb4  addiu       $a1, $a1, -0x114C
    ctx->pc = 0x154344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962868));
    // 0x154348: 0x2484eeb8  addiu       $a0, $a0, -0x1148
    ctx->pc = 0x154348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    // 0x15434c: 0x2463eec0  addiu       $v1, $v1, -0x1140
    ctx->pc = 0x15434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962880));
    // 0x154350: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x154350u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x154354: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x154358: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x154358u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x15435c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x154360: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x154360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x154364: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x154364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x154368: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x154368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15436c: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x15436cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x154370: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x154370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x154374: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x154374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x154378: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x154378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15437c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15437cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x154380: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x154380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x154384: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x154384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x154388: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x154388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15438c: 0xaf8385c0  sw          $v1, -0x7A40($gp)
    ctx->pc = 0x15438cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 3));
label_154390:
    // 0x154390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x154390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154398: 0x3e00008  jr          $ra
    ctx->pc = 0x154398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154398u;
        // 0x15439c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1543A0u;
}
