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

// Function: sub_0022B190
// Address: 0x22b190 - 0x22b344
void sub_0022B190_0x22b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B190_0x22b190");
#endif

    switch (ctx->pc) {
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b208u: goto label_22b208;
        case 0x22b268u: goto label_22b268;
        case 0x22b2c8u: goto label_22b2c8;
        default: break;
    }

    ctx->pc = 0x22b190u;

    // 0x22b190: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22b194: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b198: 0x8c43b2e4  lw          $v1, -0x4D1C($v0)
    ctx->pc = 0x22b198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BB2E4u));
    // 0x22b19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b1a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b1a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22b1b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22b1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22b1b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22b1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22b1c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22b1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B1C4u;
    {
        const bool branch_taken_0x22b1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1C4u;
        // 0x22b1c8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1c4) {
            ctx->pc = 0x22B1D4u;
            goto label_22b1d4;
        }
    }
    ctx->pc = 0x22B1CCu;
    // 0x22b1cc: 0xc08ac54  jal         func_22B150
    ctx->pc = 0x22B1CCu;
    SET_GPR_U32(ctx, 31, 0x22B1D4u);
    ctx->pc = 0x22B150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B150u, 0x22B1CCu, 0x22B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1D4u;
label_22b1d4:
    // 0x22b1d4: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x22b1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22b1d8: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x22b1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22b1dc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B1DCu;
    {
        const bool branch_taken_0x22b1dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1DCu;
        // 0x22b1e0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1dc) {
            ctx->pc = 0x22B1ECu;
            goto label_22b1ec;
        }
    }
    ctx->pc = 0x22B1E4u;
    // 0x22b1e4: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x22B1E4u;
    {
        const bool branch_taken_0x22b1e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x22B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1E4u;
        // 0x22b1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1e4) {
            ctx->pc = 0x22B324u;
            goto label_22b324;
        }
    }
    ctx->pc = 0x22B1ECu;
label_22b1ec:
    // 0x22b1ec: 0x3c0b0067  lui         $t3, 0x67
    ctx->pc = 0x22b1ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)103 << 16));
    // 0x22b1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f4: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x22b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x22b1f8: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22B1F8u;
    {
        const bool branch_taken_0x22b1f8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x22B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1F8u;
        // 0x22b1fc: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1f8) {
            ctx->pc = 0x22B25Cu;
            goto label_22b25c;
        }
    }
    ctx->pc = 0x22B200u;
    // 0x22b200: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22b200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b204: 0x0  nop
    ctx->pc = 0x22b204u;
    // NOP
label_22b208:
    // 0x22b208: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x22b208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x22b20c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b210: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x22b210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b214: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x22b214u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22b218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22b218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22b21c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22b220: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x22b220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x22b224: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x22b224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22b228: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x22b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x22b22c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x22b22cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22b230: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22b230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b234: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x22b234u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x22b238: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x22b238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x22b23c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x22b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x22b240: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b244: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x22b244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22b248: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22b248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22b24c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22B24Cu;
    {
        const bool branch_taken_0x22b24c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B24Cu;
        // 0x22b250: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b24c) {
            ctx->pc = 0x22B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b208;
        }
    }
    ctx->pc = 0x22B254u;
    // 0x22b254: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x22b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x22b258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b25c:
    // 0x22b25c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22B25Cu;
    {
        const bool branch_taken_0x22b25c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x22B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B25Cu;
        // 0x22b260: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b25c) {
            ctx->pc = 0x22B2B4u;
            goto label_22b2b4;
        }
    }
    ctx->pc = 0x22B264u;
    // 0x22b264: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x22b264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b268:
    // 0x22b268: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x22b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x22b26c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b270: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x22b270u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b274: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x22b274u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22b278: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22b278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22b27c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22b280: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x22b280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x22b284: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x22b284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22b288: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x22b288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x22b28c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x22b28cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22b290: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22b290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b294: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x22b294u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x22b298: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x22b29c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x22b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x22b2a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b2a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22b2a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x22b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x22b2ac: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22B2ACu;
    {
        const bool branch_taken_0x22b2ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2ACu;
        // 0x22b2b0: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2ac) {
            ctx->pc = 0x22B268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b268;
        }
    }
    ctx->pc = 0x22B2B4u;
label_22b2b4:
    // 0x22b2b4: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x22b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x22b2b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2bc: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22B2BCu;
    {
        const bool branch_taken_0x22b2bc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x22B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2BCu;
        // 0x22b2c0: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2bc) {
            ctx->pc = 0x22B314u;
            goto label_22b314;
        }
    }
    ctx->pc = 0x22B2C4u;
    // 0x22b2c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x22b2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b2c8:
    // 0x22b2c8: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x22b2cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b2d0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x22b2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b2d4: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x22b2d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22b2d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22b2dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22b2e0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x22b2e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x22b2e4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22b2e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22b2e8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x22b2e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22b2ec: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x22b2f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22b2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2f4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x22b2f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x22b2f8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x22b2f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x22b2fc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x22b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x22b300: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22b300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b304: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x22b304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22b308: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x22b308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x22b30c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22B30Cu;
    {
        const bool branch_taken_0x22b30c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B30Cu;
        // 0x22b310: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b30c) {
            ctx->pc = 0x22B2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b2c8;
        }
    }
    ctx->pc = 0x22B314u;
label_22b314:
    // 0x22b314: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x22b314u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x22b318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b31c: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x22b31cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x22b320: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x22b320u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_22b324:
    // 0x22b324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b32c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22b32cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b330: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22b330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22b334: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22b334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b338: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22b338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22b33c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B33Cu;
        // 0x22b340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B344u;
}
