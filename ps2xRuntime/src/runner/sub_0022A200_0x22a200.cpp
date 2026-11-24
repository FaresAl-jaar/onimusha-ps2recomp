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

// Function: sub_0022A200
// Address: 0x22a200 - 0x22a318
void sub_0022A200_0x22a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A200_0x22a200");
#endif

    switch (ctx->pc) {
        case 0x22a26cu: goto label_22a26c;
        default: break;
    }

    ctx->pc = 0x22a200u;

    // 0x22a200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a204: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22a208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a20c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22a20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x22a210: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x22a210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a214: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22a218: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x22a21c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22a220: 0x2612000f  addiu       $s2, $s0, 0xF
    ctx->pc = 0x22a220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x22a224: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22a228: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22a22c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22a230: 0x2614000d  addiu       $s4, $s0, 0xD
    ctx->pc = 0x22a230u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x22a234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22a238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a23c: 0xa6150002  sh          $s5, 0x2($s0)
    ctx->pc = 0x22a23cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x22a240: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x22a244: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a248: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x22a248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22a24c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x22a24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22a250: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22a250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a254: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x22a254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a258: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x22a258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a25c: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x22a25cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x22a260: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22a264: 0xc08a83c  jal         func_22A0F0
    ctx->pc = 0x22A264u;
    SET_GPR_U32(ctx, 31, 0x22A26Cu);
    ctx->pc = 0x22A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A264u;
    // 0x22a268: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A0F0u, 0x22A264u, 0x22A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A26Cu;
label_22a26c:
    // 0x22a26c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A26Cu;
    {
        const bool branch_taken_0x22a26c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x22A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A26Cu;
        // 0x22a270: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a26c) {
            ctx->pc = 0x22A280u;
            goto label_22a280;
        }
    }
    ctx->pc = 0x22A274u;
    // 0x22a274: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22A274u;
    {
        const bool branch_taken_0x22a274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A274u;
        // 0x22a278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a274) {
            ctx->pc = 0x22A2F4u;
            goto label_22a2f4;
        }
    }
    ctx->pc = 0x22A27Cu;
    // 0x22a27c: 0x0  nop
    ctx->pc = 0x22a27cu;
    // NOP
label_22a280:
    // 0x22a280: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x22a280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x22a284: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x22a284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x22a288: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22a288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x22a28c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x22a290: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x22a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x22a294: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x22a294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a298: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x22a298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a29c: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x22a29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a2a0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x22a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22a2a4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x22a2a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22a2a8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22a2ac: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x22a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x22a2b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a2b4: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x22a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x22a2b8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22a2bc: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x22a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x22a2c0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x22a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x22a2c4: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x22a2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x22a2c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x22a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22a2cc: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x22a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x22a2d0: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x22a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x22a2d4: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x22a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x22a2d8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x22a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x22a2dc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x22a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x22a2e0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x22a2e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22a2e4: 0x54470002  bnel        $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A2E4u;
    {
        const bool branch_taken_0x22a2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x22a2e4) {
            ctx->pc = 0x22A2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A2E4u;
            // 0x22a2e8: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A2F0u;
            goto label_22a2f0;
        }
    }
    ctx->pc = 0x22A2ECu;
    // 0x22a2ec: 0xa615009c  sh          $s5, 0x9C($s0)
    ctx->pc = 0x22a2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 21));
label_22a2f0:
    // 0x22a2f0: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x22a2f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_22a2f4:
    // 0x22a2f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22a2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a2f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22a2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a2fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22a2fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a300: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22a300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22a304: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a308: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x22a308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22a30c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a310: 0x3e00008  jr          $ra
    ctx->pc = 0x22A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A310u;
        // 0x22a314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A318u;
}
