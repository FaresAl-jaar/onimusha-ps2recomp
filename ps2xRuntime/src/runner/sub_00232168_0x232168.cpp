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

// Function: sub_00232168
// Address: 0x232168 - 0x23231c
void sub_00232168_0x232168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232168_0x232168");
#endif

    switch (ctx->pc) {
        case 0x23221cu: goto label_23221c;
        case 0x232250u: goto label_232250;
        case 0x232278u: goto label_232278;
        case 0x23228cu: goto label_23228c;
        case 0x2322c8u: goto label_2322c8;
        case 0x2322e4u: goto label_2322e4;
        default: break;
    }

    ctx->pc = 0x232168u;

    // 0x232168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23216c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x23216cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232178: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23217c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23217cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232184: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232188: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x232188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23218c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x23218Cu;
    {
        const bool branch_taken_0x23218c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x232190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23218Cu;
        // 0x232190: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23218c) {
            ctx->pc = 0x232198u;
            goto label_232198;
        }
    }
    ctx->pc = 0x232194u;
    // 0x232194: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x232194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_232198:
    // 0x232198: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x232198u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23219c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x23219Cu;
    {
        const bool branch_taken_0x23219c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2321A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23219Cu;
        // 0x2321a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23219c) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x2321A4u;
    // 0x2321a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2321a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2321a8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2321a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2321ac: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x2321acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2321b0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2321b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2321b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2321b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2321b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2321bc: 0x1485004f  bne         $a0, $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2321BCu;
    {
        const bool branch_taken_0x2321bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2321C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321BCu;
        // 0x2321c0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321bc) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x2321C4u;
    // 0x2321c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2321c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2321c8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2321c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2321cc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2321d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2321d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2321d4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2321D4u;
    {
        const bool branch_taken_0x2321d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321D4u;
        // 0x2321d8: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321d4) {
            ctx->pc = 0x2321E0u;
            goto label_2321e0;
        }
    }
    ctx->pc = 0x2321DCu;
    // 0x2321dc: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x2321dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_2321e0:
    // 0x2321e0: 0x12600046  beqz        $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x2321E0u;
    {
        const bool branch_taken_0x2321e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321E0u;
        // 0x2321e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321e0) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x2321E8u;
    // 0x2321e8: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x2321e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2321ec: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x2321ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2321f0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2321F0u;
    {
        const bool branch_taken_0x2321f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2321F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321F0u;
        // 0x2321f4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321f0) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x2321F8u;
    // 0x2321f8: 0x2652fffa  addiu       $s2, $s2, -0x6
    ctx->pc = 0x2321f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967290));
    // 0x2321fc: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x2321fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x232200: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x232200u;
    {
        const bool branch_taken_0x232200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232200u;
        // 0x232204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232200) {
            ctx->pc = 0x232300u;
            goto label_232300;
        }
    }
    ctx->pc = 0x232208u;
    // 0x232208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23220c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x23220cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x232210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x232210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232214: 0xc08c7b6  jal         func_231ED8
    ctx->pc = 0x232214u;
    SET_GPR_U32(ctx, 31, 0x23221Cu);
    ctx->pc = 0x232218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232214u;
    // 0x232218: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231ED8u, 0x232214u, 0x23221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23221Cu;
label_23221c:
    // 0x23221c: 0x8263003c  lb          $v1, 0x3C($s3)
    ctx->pc = 0x23221cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x232220: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x232220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232224: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232224u;
    {
        const bool branch_taken_0x232224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232224u;
        // 0x232228: 0x2a430004  slti        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232224) {
            ctx->pc = 0x232238u;
            goto label_232238;
        }
    }
    ctx->pc = 0x23222Cu;
    // 0x23222c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x23222cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x232230: 0x2652fff4  addiu       $s2, $s2, -0xC
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
    // 0x232234: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x232234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_232238:
    // 0x232238: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x232238u;
    {
        const bool branch_taken_0x232238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232238u;
        // 0x23223c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232238) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x232240u;
    // 0x232240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232244: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x232248: 0xc08c7e6  jal         func_231F98
    ctx->pc = 0x232248u;
    SET_GPR_U32(ctx, 31, 0x232250u);
    ctx->pc = 0x23224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232248u;
    // 0x23224c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F98u, 0x232248u, 0x232250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232250u;
label_232250:
    // 0x232250: 0x8663000e  lh          $v1, 0xE($s3)
    ctx->pc = 0x232250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x232254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x232254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23225c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232260: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x232260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232264: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x232264u;
    {
        const bool branch_taken_0x232264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232264u;
        // 0x232268: 0x9664000e  lhu         $a0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232264) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x23226Cu;
    // 0x23226c: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23226Cu;
    {
        const bool branch_taken_0x23226c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x232270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23226Cu;
        // 0x232270: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23226c) {
            ctx->pc = 0x23229Cu;
            goto label_23229c;
        }
    }
    ctx->pc = 0x232274u;
    // 0x232274: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x232274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_232278:
    // 0x232278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x232278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23227c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x23227cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x232280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232284: 0xc08c7ee  jal         func_231FB8
    ctx->pc = 0x232284u;
    SET_GPR_U32(ctx, 31, 0x23228Cu);
    ctx->pc = 0x232288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232284u;
    // 0x232288: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231FB8u, 0x232284u, 0x23228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23228Cu;
label_23228c:
    // 0x23228c: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x232290: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x232290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232294: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x232294u;
    {
        const bool branch_taken_0x232294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232294u;
        // 0x232298: 0x9664000e  lhu         $a0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232294) {
            ctx->pc = 0x232278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232278;
        }
    }
    ctx->pc = 0x23229Cu;
label_23229c:
    // 0x23229c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x23229cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2322a0: 0x82640003  lb          $a0, 0x3($s3)
    ctx->pc = 0x2322a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2322a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2322a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2322a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2322b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2322b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2322b8: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2322B8u;
    {
        const bool branch_taken_0x2322b8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2322BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322B8u;
        // 0x2322bc: 0x2439023  subu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322b8) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322C0u;
    // 0x2322c0: 0x26700024  addiu       $s0, $s3, 0x24
    ctx->pc = 0x2322c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x2322c4: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x2322c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
label_2322c8:
    // 0x2322c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2322C8u;
    {
        const bool branch_taken_0x2322c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C8u;
        // 0x2322cc: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322c8) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322D0u;
    // 0x2322d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2322d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322d4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2322d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2322d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322dc: 0xc08c82a  jal         func_2320A8
    ctx->pc = 0x2322DCu;
    SET_GPR_U32(ctx, 31, 0x2322E4u);
    ctx->pc = 0x2322E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2322DCu;
    // 0x2322e0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2320A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2320A8u, 0x2322DCu, 0x2322E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322E4u;
label_2322e4:
    // 0x2322e4: 0x82620003  lb          $v0, 0x3($s3)
    ctx->pc = 0x2322e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2322e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2322ec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2322ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2322f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2322F0u;
    {
        const bool branch_taken_0x2322f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322F0u;
        // 0x2322f4: 0x2a42000c  slti        $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322f0) {
            ctx->pc = 0x2322C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2322c8;
        }
    }
    ctx->pc = 0x2322F8u;
label_2322f8:
    // 0x2322f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2322f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2322fc:
    // 0x2322fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2322fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232300:
    // 0x232300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232304: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232308: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23230c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23230cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232310: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x232310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x232314: 0x3e00008  jr          $ra
    ctx->pc = 0x232314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232314u;
        // 0x232318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23231Cu;
}
