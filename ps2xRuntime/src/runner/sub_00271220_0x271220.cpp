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

// Function: sub_00271220
// Address: 0x271220 - 0x27137c
void sub_00271220_0x271220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271220_0x271220");
#endif

    switch (ctx->pc) {
        case 0x271268u: goto label_271268;
        case 0x27132cu: goto label_27132c;
        case 0x27134cu: goto label_27134c;
        default: break;
    }

    ctx->pc = 0x271220u;

    // 0x271220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x271220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x271224: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x271224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x271228: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27122c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271230: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x271230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271238: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27123c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271240: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x271240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x271244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271248: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x271248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27124c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27124cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271250: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x271250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271254: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x271254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271258: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x271258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27125c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x27125cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x271260: 0xc05e360  jal         func_178D80
    ctx->pc = 0x271260u;
    SET_GPR_U32(ctx, 31, 0x271268u);
    ctx->pc = 0x271264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271260u;
    // 0x271264: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x271260u, 0x271268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271268u;
label_271268:
    // 0x271268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271268u;
    {
        const bool branch_taken_0x271268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271268) {
            ctx->pc = 0x271278u;
            goto label_271278;
        }
    }
    ctx->pc = 0x271270u;
    // 0x271270: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x271270u;
    {
        const bool branch_taken_0x271270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271270u;
        // 0x271274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271270) {
            ctx->pc = 0x271358u;
            goto label_271358;
        }
    }
    ctx->pc = 0x271278u;
label_271278:
    // 0x271278: 0x26a30f20  addiu       $v1, $s5, 0xF20
    ctx->pc = 0x271278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3872));
    // 0x27127c: 0x35cc0  sll         $t3, $v1, 19
    ctx->pc = 0x27127cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x271280: 0x103602  srl         $a2, $s0, 24
    ctx->pc = 0x271280u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x271284: 0x26830700  addiu       $v1, $s4, 0x700
    ctx->pc = 0x271284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x271288: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x271288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27128c: 0x26230f20  addiu       $v1, $s1, 0xF20
    ctx->pc = 0x27128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3872));
    // 0x271290: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x271290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x271294: 0x364c0  sll         $t4, $v1, 19
    ctx->pc = 0x271294u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x271298: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x271298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x27129c: 0x26430700  addiu       $v1, $s2, 0x700
    ctx->pc = 0x27129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x2712a0: 0xab4825  or          $t1, $a1, $t3
    ctx->pc = 0x2712a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x2712a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2712a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2712a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2712a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2712ac: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x2712acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2712b0: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x2712b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x2712b4: 0x3c038028  lui         $v1, 0x8028
    ctx->pc = 0x2712b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32808 << 16));
    // 0x2712b8: 0x34640042  ori         $a0, $v1, 0x42
    ctx->pc = 0x2712b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)66);
    // 0x2712bc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2712bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2712c0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2712c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2712c4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2712c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x2712c8: 0x34672000  ori         $a3, $v1, 0x2000
    ctx->pc = 0x2712c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2712cc: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x2712ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2712d0: 0x14c2025  or          $a0, $t2, $t4
    ctx->pc = 0x2712d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x2712d4: 0x14b1825  or          $v1, $t2, $t3
    ctx->pc = 0x2712d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x2712d8: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2712d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2712dc: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2712dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2712e0: 0xa046000f  sb          $a2, 0xF($v0)
    ctx->pc = 0x2712e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 6));
    // 0x2712e4: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x2712e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x2712e8: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x2712e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x2712ec: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x2712ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x2712f0: 0xac53001c  sw          $s3, 0x1C($v0)
    ctx->pc = 0x2712f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 19));
    // 0x2712f4: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x2712f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x2712f8: 0xac530024  sw          $s3, 0x24($v0)
    ctx->pc = 0x2712f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 19));
    // 0x2712fc: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2712fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x271300: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x271300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
    // 0x271304: 0xac490030  sw          $t1, 0x30($v0)
    ctx->pc = 0x271304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 9));
    // 0x271308: 0xac530034  sw          $s3, 0x34($v0)
    ctx->pc = 0x271308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 19));
    // 0x27130c: 0x8f838898  lw          $v1, -0x7768($gp)
    ctx->pc = 0x27130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x271310: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271310u;
    {
        const bool branch_taken_0x271310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271310) {
            ctx->pc = 0x271338u;
            goto label_271338;
        }
    }
    ctx->pc = 0x271318u;
    // 0x271318: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x27131c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27131cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271324: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271324u;
    SET_GPR_U32(ctx, 31, 0x27132Cu);
    ctx->pc = 0x271328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271324u;
    // 0x271328: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271324u, 0x27132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27132Cu;
label_27132c:
    // 0x27132c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27132Cu;
    {
        const bool branch_taken_0x27132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27132c) {
            ctx->pc = 0x271350u;
            goto label_271350;
        }
    }
    ctx->pc = 0x271334u;
    // 0x271334: 0x0  nop
    ctx->pc = 0x271334u;
    // NOP
label_271338:
    // 0x271338: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x27133c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271344: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271344u;
    SET_GPR_U32(ctx, 31, 0x27134Cu);
    ctx->pc = 0x271348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271344u;
    // 0x271348: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271344u, 0x27134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27134Cu;
label_27134c:
    // 0x27134c: 0x0  nop
    ctx->pc = 0x27134cu;
    // NOP
label_271350:
    // 0x271350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271354: 0x0  nop
    ctx->pc = 0x271354u;
    // NOP
label_271358:
    // 0x271358: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x271358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27135c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27135cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271360: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27136c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27136cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271374: 0x3e00008  jr          $ra
    ctx->pc = 0x271374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271374u;
        // 0x271378: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27137Cu;
}
