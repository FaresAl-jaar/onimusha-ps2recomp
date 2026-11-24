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

// Function: sub_00227540
// Address: 0x227540 - 0x227640
void sub_00227540_0x227540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227540_0x227540");
#endif

    switch (ctx->pc) {
        case 0x2275c8u: goto label_2275c8;
        case 0x227618u: goto label_227618;
        default: break;
    }

    ctx->pc = 0x227540u;

    // 0x227540: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x227540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x227544: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x227544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227548: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x227548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x22754c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x22754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x227550: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x227550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227554: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x227554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x227558: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x227558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22755c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x22755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x227560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227564: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x227564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x227568: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x227568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22756c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x22756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x227570: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x227570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x227574: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x227574u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227578: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x227578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x22757c: 0x26d00004  addiu       $s0, $s6, 0x4
    ctx->pc = 0x22757cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x227580: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x227580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227584: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x227584u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227588: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x227588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22758c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x227590: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x227590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x227594: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227598: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22759c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x22759cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275a0: 0x108a80b  movn        $s5, $t0, $t0
    ctx->pc = 0x2275a0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
    // 0x2275a4: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x2275a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x2275a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2275ac: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x2275acu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2275b0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x2275b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x2275b4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2275B4u;
    {
        const bool branch_taken_0x2275b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275B4u;
        // 0x2275b8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275b4) {
            ctx->pc = 0x2275C0u;
            goto label_2275c0;
        }
    }
    ctx->pc = 0x2275BCu;
    // 0x2275bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2275bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2275c0:
    // 0x2275c0: 0xc089d90  jal         func_227640
    ctx->pc = 0x2275C0u;
    SET_GPR_U32(ctx, 31, 0x2275C8u);
    ctx->pc = 0x227640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227640u, 0x2275C0u, 0x2275C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275C8u;
label_2275c8:
    // 0x2275c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2275cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2275ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2275d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2275d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2275d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2275d8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2275d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2275dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2275dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2275e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2275e4: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x2275e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x2275e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2275e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2275ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2275ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2275f0: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x2275f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x2275f4: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x2275f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x2275f8: 0x12250007  beq         $s1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2275F8u;
    {
        const bool branch_taken_0x2275f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x2275FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275F8u;
        // 0x2275fc: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275f8) {
            ctx->pc = 0x227618u;
            goto label_227618;
        }
    }
    ctx->pc = 0x227600u;
    // 0x227600: 0x56260006  bnel        $s1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x227600u;
    {
        const bool branch_taken_0x227600 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x227600) {
            ctx->pc = 0x227604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227600u;
            // 0x227604: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22761Cu;
            goto label_22761c;
        }
    }
    ctx->pc = 0x227608u;
    // 0x227608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22760c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227610: 0xc0894d0  jal         func_225340
    ctx->pc = 0x227610u;
    SET_GPR_U32(ctx, 31, 0x227618u);
    ctx->pc = 0x227614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227610u;
    // 0x227614: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x227610u, 0x227618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227618u;
label_227618:
    // 0x227618: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x227618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22761c:
    // 0x22761c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x22761cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x227620: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x227620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227624: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x227624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x227628: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x227628u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22762c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x22762cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x227630: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x227630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227634: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x227634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x227638: 0x3e00008  jr          $ra
    ctx->pc = 0x227638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227638u;
        // 0x22763c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227640u;
}
