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

// Function: sub_003841D0
// Address: 0x3841d0 - 0x384370
void sub_003841D0_0x3841d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003841D0_0x3841d0");
#endif

    switch (ctx->pc) {
        case 0x384300u: goto label_384300;
        case 0x384330u: goto label_384330;
        case 0x384360u: goto label_384360;
        default: break;
    }

    ctx->pc = 0x3841d0u;

    // 0x3841d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3841d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3841d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3841d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3841d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3841d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3841dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3841dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3841e0: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x3841E0u;
    {
        const bool branch_taken_0x3841e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841E0u;
        // 0x3841e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3841e0) {
            ctx->pc = 0x384360u;
            goto label_384360;
        }
    }
    ctx->pc = 0x3841E8u;
    // 0x3841e8: 0x9204001d  lbu         $a0, 0x1D($s0)
    ctx->pc = 0x3841e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x3841ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3841ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3841f0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3841F0u;
    {
        const bool branch_taken_0x3841f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3841F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841F0u;
        // 0x3841f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3841f0) {
            ctx->pc = 0x3842C8u;
            goto label_3842c8;
        }
    }
    ctx->pc = 0x3841F8u;
    // 0x3841f8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3841F8u;
    {
        const bool branch_taken_0x3841f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3841f8) {
            ctx->pc = 0x384298u;
            goto label_384298;
        }
    }
    ctx->pc = 0x384200u;
    // 0x384200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x384200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384204: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x384204u;
    {
        const bool branch_taken_0x384204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x384204) {
            ctx->pc = 0x384258u;
            goto label_384258;
        }
    }
    ctx->pc = 0x38420Cu;
    // 0x38420c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38420Cu;
    {
        const bool branch_taken_0x38420c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38420c) {
            ctx->pc = 0x384220u;
            goto label_384220;
        }
    }
    ctx->pc = 0x384214u;
    // 0x384214: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x384214u;
    {
        const bool branch_taken_0x384214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384214) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x38421Cu;
    // 0x38421c: 0x0  nop
    ctx->pc = 0x38421cu;
    // NOP
label_384220:
    // 0x384220: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x384220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x384224: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x384224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x384228: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x384228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x38422c: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x38422cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x384230: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x384230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x384234: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x384234u;
    {
        const bool branch_taken_0x384234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x384234) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x38423Cu;
    // 0x38423c: 0x9204001d  lbu         $a0, 0x1D($s0)
    ctx->pc = 0x38423cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x384240: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x384240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x384244: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x384244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x384248: 0xa204001d  sb          $a0, 0x1D($s0)
    ctx->pc = 0x384248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x38424c: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x38424cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x384250: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x384250u;
    {
        const bool branch_taken_0x384250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384250u;
        // 0x384254: 0xa200001e  sb          $zero, 0x1E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384250) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x384258u;
label_384258:
    // 0x384258: 0x8203001e  lb          $v1, 0x1E($s0)
    ctx->pc = 0x384258u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x38425c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x384260: 0xa203001e  sb          $v1, 0x1E($s0)
    ctx->pc = 0x384260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x384264: 0x8203001e  lb          $v1, 0x1E($s0)
    ctx->pc = 0x384264u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x384268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x384268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38426c: 0xa203001e  sb          $v1, 0x1E($s0)
    ctx->pc = 0x38426cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x384270: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x384270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x384274: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x384274u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x384278: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x384278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x38427c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x38427Cu;
    {
        const bool branch_taken_0x38427c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38427c) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x384284u;
    // 0x384284: 0x9203001d  lbu         $v1, 0x1D($s0)
    ctx->pc = 0x384284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x384288: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x384288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38428c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x38428Cu;
    {
        const bool branch_taken_0x38428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38428Cu;
        // 0x384290: 0xa203001d  sb          $v1, 0x1D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38428c) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x384294u;
    // 0x384294: 0x0  nop
    ctx->pc = 0x384294u;
    // NOP
label_384298:
    // 0x384298: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x384298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x38429c: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x38429cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x3842a0: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x3842a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x3842a4: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x3842a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3842a8: 0x1c60000f  bgtz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3842A8u;
    {
        const bool branch_taken_0x3842a8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3842a8) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x3842B0u;
    // 0x3842b0: 0x9203001d  lbu         $v1, 0x1D($s0)
    ctx->pc = 0x3842b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x3842b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3842b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3842b8: 0xa203001d  sb          $v1, 0x1D($s0)
    ctx->pc = 0x3842b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x3842bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3842BCu;
    {
        const bool branch_taken_0x3842bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3842C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842BCu;
        // 0x3842c0: 0xa6000020  sh          $zero, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3842bc) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x3842C4u;
    // 0x3842c4: 0x0  nop
    ctx->pc = 0x3842c4u;
    // NOP
label_3842c8:
    // 0x3842c8: 0x8203001e  lb          $v1, 0x1E($s0)
    ctx->pc = 0x3842c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x3842cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3842ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3842d0: 0xa203001e  sb          $v1, 0x1E($s0)
    ctx->pc = 0x3842d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x3842d4: 0x8203001e  lb          $v1, 0x1E($s0)
    ctx->pc = 0x3842d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x3842d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3842D8u;
    {
        const bool branch_taken_0x3842d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3842d8) {
            ctx->pc = 0x3842E8u;
            goto label_3842e8;
        }
    }
    ctx->pc = 0x3842E0u;
    // 0x3842e0: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x3842e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x3842e4: 0x0  nop
    ctx->pc = 0x3842e4u;
    // NOP
label_3842e8:
    // 0x3842e8: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x3842e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3842ec: 0x1860001c  blez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3842ECu;
    {
        const bool branch_taken_0x3842ec = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3842ec) {
            ctx->pc = 0x384360u;
            goto label_384360;
        }
    }
    ctx->pc = 0x3842F4u;
    // 0x3842f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3842f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3842f8: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x3842F8u;
    SET_GPR_U32(ctx, 31, 0x384300u);
    ctx->pc = 0x3842FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3842F8u;
    // 0x3842fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x3842F8u, 0x384300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384300u;
label_384300:
    // 0x384300: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x384300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x384304: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x384304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x384308: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x384308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x38430c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x38430cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x384310: 0x2484c528  addiu       $a0, $a0, -0x3AD8
    ctx->pc = 0x384310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952232));
    // 0x384314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38431c: 0x2407011c  addiu       $a3, $zero, 0x11C
    ctx->pc = 0x38431cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x384320: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x384320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x384324: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x384324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x384328: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x384328u;
    SET_GPR_U32(ctx, 31, 0x384330u);
    ctx->pc = 0x38432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384328u;
    // 0x38432c: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x384328u, 0x384330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384330u;
label_384330:
    // 0x384330: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x384330u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x384334: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x384334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x384338: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x384338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x38433c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x38433cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x384340: 0x2484c534  addiu       $a0, $a0, -0x3ACC
    ctx->pc = 0x384340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952244));
    // 0x384344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384348: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x384348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38434c: 0x2407011c  addiu       $a3, $zero, 0x11C
    ctx->pc = 0x38434cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x384350: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x384350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x384354: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x384354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x384358: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x384358u;
    SET_GPR_U32(ctx, 31, 0x384360u);
    ctx->pc = 0x38435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384358u;
    // 0x38435c: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x384358u, 0x384360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384360u;
label_384360:
    // 0x384360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384368: 0x3e00008  jr          $ra
    ctx->pc = 0x384368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384368u;
        // 0x38436c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384370u;
}
