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

// Function: sub_002D41B0
// Address: 0x2d41b0 - 0x2d4810
void sub_002D41B0_0x2d41b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D41B0_0x2d41b0");
#endif

    switch (ctx->pc) {
        case 0x2d4358u: goto label_2d4358;
        case 0x2d440cu: goto label_2d440c;
        case 0x2d441cu: goto label_2d441c;
        case 0x2d4430u: goto label_2d4430;
        case 0x2d4794u: goto label_2d4794;
        case 0x2d47b8u: goto label_2d47b8;
        case 0x2d47c8u: goto label_2d47c8;
        case 0x2d47dcu: goto label_2d47dc;
        default: break;
    }

    ctx->pc = 0x2d41b0u;

    // 0x2d41b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d41b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2d41b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d41b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d41b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d41bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d41bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d41c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d41c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d41c4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2d41c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d41cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d41ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d41d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d41d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d41d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d41d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d41e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d41e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d41e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d41e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d41e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d41ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d41f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2d41f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41f4: 0x90a30014  lbu         $v1, 0x14($a1)
    ctx->pc = 0x2d41f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d41f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d41fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d4200: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2d4200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d4204: 0x10600176  beqz        $v1, . + 4 + (0x176 << 2)
    ctx->pc = 0x2D4204u;
    {
        const bool branch_taken_0x2d4204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4204u;
        // 0x2d4208: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4204) {
            ctx->pc = 0x2D47E0u;
            goto label_2d47e0;
        }
    }
    ctx->pc = 0x2D420Cu;
    // 0x2d420c: 0x82840015  lb          $a0, 0x15($s4)
    ctx->pc = 0x2d420cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 21)));
    // 0x2d4210: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d4210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4214: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4214u;
    {
        const bool branch_taken_0x2d4214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d4214) {
            ctx->pc = 0x2D4220u;
            goto label_2d4220;
        }
    }
    ctx->pc = 0x2D421Cu;
    // 0x2d421c: 0x92a40047  lbu         $a0, 0x47($s5)
    ctx->pc = 0x2d421cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 71)));
label_2d4220:
    // 0x2d4220: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d4220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d4224: 0x31650001  andi        $a1, $t3, 0x1
    ctx->pc = 0x2d4224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2d4228: 0xa3a300d0  sb          $v1, 0xD0($sp)
    ctx->pc = 0x2d4228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d422c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2d422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d4230: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x2d4230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d4234: 0x92b60044  lbu         $s6, 0x44($s5)
    ctx->pc = 0x2d4234u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x2d4238: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x2d4238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2d423c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x2d423cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d4240: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2d4240u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2d4244: 0xa7a300c0  sh          $v1, 0xC0($sp)
    ctx->pc = 0x2d4244u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d4248: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2d4248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2d424c: 0xa7a300b0  sh          $v1, 0xB0($sp)
    ctx->pc = 0x2d424cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d4250: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x2d4250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2d4254: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D4254u;
    {
        const bool branch_taken_0x2d4254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4254u;
        // 0x2d4258: 0xa7a300a0  sh          $v1, 0xA0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4254) {
            ctx->pc = 0x2D4280u;
            goto label_2d4280;
        }
    }
    ctx->pc = 0x2D425Cu;
    // 0x2d425c: 0x86850004  lh          $a1, 0x4($s4)
    ctx->pc = 0x2d425cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d4260: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x2d4260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2d4264: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2d4264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2d4268: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d4268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d426c: 0x59c3c  dsll32      $s3, $a1, 16
    ctx->pc = 0x2d426cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d4270: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x2d4270u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4274: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d4274u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d4278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4278u;
    {
        const bool branch_taken_0x2d4278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4278u;
        // 0x2d427c: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4278) {
            ctx->pc = 0x2D4298u;
            goto label_2d4298;
        }
    }
    ctx->pc = 0x2D4280u;
label_2d4280:
    // 0x2d4280: 0x31630002  andi        $v1, $t3, 0x2
    ctx->pc = 0x2d4280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
    // 0x2d4284: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4284u;
    {
        const bool branch_taken_0x2d4284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4284) {
            ctx->pc = 0x2D4298u;
            goto label_2d4298;
        }
    }
    ctx->pc = 0x2D428Cu;
    // 0x2d428c: 0x86930004  lh          $s3, 0x4($s4)
    ctx->pc = 0x2d428cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d4290: 0x86920006  lh          $s2, 0x6($s4)
    ctx->pc = 0x2d4290u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2d4294: 0x0  nop
    ctx->pc = 0x2d4294u;
    // NOP
label_2d4298:
    // 0x2d4298: 0x31630004  andi        $v1, $t3, 0x4
    ctx->pc = 0x2d4298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
    // 0x2d429c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D429Cu;
    {
        const bool branch_taken_0x2d429c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d429c) {
            ctx->pc = 0x2D42C8u;
            goto label_2d42c8;
        }
    }
    ctx->pc = 0x2D42A4u;
    // 0x2d42a4: 0x86850008  lh          $a1, 0x8($s4)
    ctx->pc = 0x2d42a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d42a8: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x2d42a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x2d42ac: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2d42acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2d42b0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2d42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2d42b4: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x2d42b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d42b8: 0x3bc3c  dsll32      $s7, $v1, 16
    ctx->pc = 0x2d42b8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d42bc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d42bcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d42c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D42C0u;
    {
        const bool branch_taken_0x2d42c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42C0u;
        // 0x2d42c4: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42c0) {
            ctx->pc = 0x2D42E0u;
            goto label_2d42e0;
        }
    }
    ctx->pc = 0x2D42C8u;
label_2d42c8:
    // 0x2d42c8: 0x31630008  andi        $v1, $t3, 0x8
    ctx->pc = 0x2d42c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8);
    // 0x2d42cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D42CCu;
    {
        const bool branch_taken_0x2d42cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d42cc) {
            ctx->pc = 0x2D42E0u;
            goto label_2d42e0;
        }
    }
    ctx->pc = 0x2D42D4u;
    // 0x2d42d4: 0x86910008  lh          $s1, 0x8($s4)
    ctx->pc = 0x2d42d4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d42d8: 0x8697000a  lh          $s7, 0xA($s4)
    ctx->pc = 0x2d42d8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x2d42dc: 0x0  nop
    ctx->pc = 0x2d42dcu;
    // NOP
label_2d42e0:
    // 0x2d42e0: 0x31630010  andi        $v1, $t3, 0x10
    ctx->pc = 0x2d42e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16);
    // 0x2d42e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D42E4u;
    {
        const bool branch_taken_0x2d42e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d42e4) {
            ctx->pc = 0x2D42F0u;
            goto label_2d42f0;
        }
    }
    ctx->pc = 0x2D42ECu;
    // 0x2d42ec: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2d42ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d42f0:
    // 0x2d42f0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2d42f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d42f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d42f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d42f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D42F8u;
    {
        const bool branch_taken_0x2d42f8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42F8u;
        // 0x2d42fc: 0x171c3c  dsll32      $v1, $s7, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42f8) {
            ctx->pc = 0x2D4310u;
            goto label_2d4310;
        }
    }
    ctx->pc = 0x2D4300u;
    // 0x2d4300: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d4300u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d4304: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4304u;
    {
        const bool branch_taken_0x2d4304 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2d4304) {
            ctx->pc = 0x2D4318u;
            goto label_2d4318;
        }
    }
    ctx->pc = 0x2D430Cu;
    // 0x2d430c: 0x0  nop
    ctx->pc = 0x2d430cu;
    // NOP
label_2d4310:
    // 0x2d4310: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x2D4310u;
    {
        const bool branch_taken_0x2d4310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4310) {
            ctx->pc = 0x2D47E0u;
            goto label_2d47e0;
        }
    }
    ctx->pc = 0x2D4318u;
label_2d4318:
    // 0x2d4318: 0x8ea60038  lw          $a2, 0x38($s5)
    ctx->pc = 0x2d4318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d431c: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x2d431cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2d4320: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4320u;
    {
        const bool branch_taken_0x2d4320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4320u;
        // 0x2d4324: 0x102e02  srl         $a1, $s0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4320) {
            ctx->pc = 0x2D4338u;
            goto label_2d4338;
        }
    }
    ctx->pc = 0x2D4328u;
    // 0x2d4328: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2d4328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2d432c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2d432cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d4330: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x2d4330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x2d4334: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x2d4334u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d4338:
    // 0x2d4338: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x2d4338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2d433c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D433Cu;
    {
        const bool branch_taken_0x2d433c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D433Cu;
        // 0x2d4340: 0x32c500ff  andi        $a1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d433c) {
            ctx->pc = 0x2D4380u;
            goto label_2d4380;
        }
    }
    ctx->pc = 0x2D4344u;
    // 0x2d4344: 0x28a10080  slti        $at, $a1, 0x80
    ctx->pc = 0x2d4344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2d4348: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4348u;
    {
        const bool branch_taken_0x2d4348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4348) {
            ctx->pc = 0x2D4380u;
            goto label_2d4380;
        }
    }
    ctx->pc = 0x2D4350u;
    // 0x2d4350: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x2D4350u;
    {
        const bool branch_taken_0x2d4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4350) {
            ctx->pc = 0x2D47E0u;
            goto label_2d47e0;
        }
    }
    ctx->pc = 0x2D4358u;
label_2d4358:
    // 0x2d4358: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x2d4358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d435c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2d435cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2d4360: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2d4360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2d4364: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2d4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d4368: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d436c: 0x59c3c  dsll32      $s3, $a1, 16
    ctx->pc = 0x2d436cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d4370: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d4370u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4374: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d4374u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d4378: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d4378u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d437c: 0x0  nop
    ctx->pc = 0x2d437cu;
    // NOP
label_2d4380:
    // 0x2d4380: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D4380u;
    {
        const bool branch_taken_0x2d4380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4380) {
            ctx->pc = 0x2D4358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4358;
        }
    }
    ctx->pc = 0x2D4388u;
    // 0x2d4388: 0x92a20210  lbu         $v0, 0x210($s5)
    ctx->pc = 0x2d4388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 528)));
    // 0x2d438c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D438Cu;
    {
        const bool branch_taken_0x2d438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d438c) {
            ctx->pc = 0x2D43D8u;
            goto label_2d43d8;
        }
    }
    ctx->pc = 0x2D4394u;
    // 0x2d4394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d4394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4398: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d4398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d439c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2d439cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d43a0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d43a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d43a4: 0xb12004  sllv        $a0, $s1, $a1
    ctx->pc = 0x2d43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
    // 0x2d43a8: 0xb71004  sllv        $v0, $s7, $a1
    ctx->pc = 0x2d43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 5) & 0x1F));
    // 0x2d43ac: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x2d43acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d43b0: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x2d43b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d43b4: 0xb32004  sllv        $a0, $s3, $a1
    ctx->pc = 0x2d43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x2d43b8: 0xb21004  sllv        $v0, $s2, $a1
    ctx->pc = 0x2d43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x2d43bc: 0x49c3c  dsll32      $s3, $a0, 16
    ctx->pc = 0x2d43bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d43c0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d43c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d43c4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d43c4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d43c8: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x2d43c8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x2d43cc: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d43ccu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d43d0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d43d0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d43d4: 0x0  nop
    ctx->pc = 0x2d43d4u;
    // NOP
label_2d43d8:
    // 0x2d43d8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D43D8u;
    {
        const bool branch_taken_0x2d43d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43D8u;
        // 0x2d43dc: 0x32c200ff  andi        $v0, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43d8) {
            ctx->pc = 0x2D4430u;
            goto label_2d4430;
        }
    }
    ctx->pc = 0x2D43E0u;
    // 0x2d43e0: 0x2841007f  slti        $at, $v0, 0x7F
    ctx->pc = 0x2d43e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x2d43e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D43E4u;
    {
        const bool branch_taken_0x2d43e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d43e4) {
            ctx->pc = 0x2D43F4u;
            goto label_2d43f4;
        }
    }
    ctx->pc = 0x2D43ECu;
    // 0x2d43ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D43ECu;
    {
        const bool branch_taken_0x2d43ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43ECu;
        // 0x2d43f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43ec) {
            ctx->pc = 0x2D43F8u;
            goto label_2d43f8;
        }
    }
    ctx->pc = 0x2D43F4u;
label_2d43f4:
    // 0x2d43f4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2d43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2d43f8:
    // 0x2d43f8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2d43f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d43fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d43fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4400: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d4400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d4404: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D4404u;
    SET_GPR_U32(ctx, 31, 0x2D440Cu);
    ctx->pc = 0x2D4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4404u;
    // 0x2d4408: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D4404u, 0x2D440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D440Cu;
label_2d440c:
    // 0x2d440c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4410: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2d4410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2d4414: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D4414u;
    SET_GPR_U32(ctx, 31, 0x2D441Cu);
    ctx->pc = 0x2D4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4414u;
    // 0x2d4418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D4414u, 0x2D441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D441Cu;
label_2d441c:
    // 0x2d441c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d441cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d4420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4424: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2d4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d4428: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D4428u;
    SET_GPR_U32(ctx, 31, 0x2D4430u);
    ctx->pc = 0x2D442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4428u;
    // 0x2d442c: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D4428u, 0x2D4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4430u;
label_2d4430:
    // 0x2d4430: 0x101a3c  dsll32      $v1, $s0, 8
    ctx->pc = 0x2d4430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 8));
    // 0x2d4434: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2d4434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d4438: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d4438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d443c: 0x3c042028  lui         $a0, 0x2028
    ctx->pc = 0x2d443cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8232 << 16));
    // 0x2d4440: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x2d4440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2d4444: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2d4444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2d4448: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2d4448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d444c: 0x34840156  ori         $a0, $a0, 0x156
    ctx->pc = 0x2d444cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)342);
    // 0x2d4450: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d4450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4454: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d4454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2d4458: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2d4458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x2d445c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d445cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d4460: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x2d4460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d4464: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2d4464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2d4468: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2D4468u;
    {
        const bool branch_taken_0x2d4468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4468) {
            ctx->pc = 0x2D4638u;
            goto label_2d4638;
        }
    }
    ctx->pc = 0x2D4470u;
    // 0x2d4470: 0x86a60048  lh          $a2, 0x48($s5)
    ctx->pc = 0x2d4470u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2d4474: 0x132c3c  dsll32      $a1, $s3, 16
    ctx->pc = 0x2d4474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d4478: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d4478u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d447c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2d447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d4480: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x2d4480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d4484: 0x86a4004a  lh          $a0, 0x4A($s5)
    ctx->pc = 0x2d4484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 74)));
    // 0x2d4488: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d4488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d448c: 0xc6a2004c  lwc1        $f2, 0x4C($s5)
    ctx->pc = 0x2d448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4490: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2d4490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d4494: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2d4494u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4498: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2d4498u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d449c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d449cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d44a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d44a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d44a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d44a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d44a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d44a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d44ac: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x2d44acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d44b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d44b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d44b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d44b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d44b8: 0x0  nop
    ctx->pc = 0x2d44b8u;
    // NOP
    // 0x2d44bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d44bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d44c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d44c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d44c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d44c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d44c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D44C8u;
    {
        const bool branch_taken_0x2d44c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44C8u;
        // 0x2d44cc: 0x46010140  add.s       $f5, $f0, $f1 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d44c8) {
            ctx->pc = 0x2D44F8u;
            goto label_2d44f8;
        }
    }
    ctx->pc = 0x2D44D0u;
    // 0x2d44d0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2d44d0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d44d4: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x2d44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x2d44d8: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x2d44d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d44dc: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x2d44dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x2d44e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d44e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d44e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d44e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d44e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d44e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44ec: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x2d44ecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d44f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2d44f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d44f4: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x2d44f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_2d44f8:
    // 0x2d44f8: 0x86a50034  lh          $a1, 0x34($s5)
    ctx->pc = 0x2d44f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2d44fc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2d44fcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4500: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2d4500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2d4504: 0x86a40036  lh          $a0, 0x36($s5)
    ctx->pc = 0x2d4504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x2d4508: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2d450c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d450cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d4510: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d4510u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4514: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x2d4514u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d4518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d4518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d451c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2d451cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2d4520: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d4520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d4524: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d4524u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d4528: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d4528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d452c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d452cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d4530: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2d4530u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2d4534: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x2d4534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2d4538: 0x46061882  mul.s       $f2, $f3, $f6
    ctx->pc = 0x2d4538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2d453c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d453cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2d4540: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2d4540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d4544: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d4548: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d4548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d454c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d454cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d4550: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x2d4550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2d4554: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d4554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d4558: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d4558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d455c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d455cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4560: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2d4560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d4564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d4568: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2d4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x2d456c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d4570: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2d4570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d4574: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2d4574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2d4578: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x2d4578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2d457c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2d457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2d4580: 0xc6a2004c  lwc1        $f2, 0x4C($s5)
    ctx->pc = 0x2d4580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4584: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d4584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d4588: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2d4588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d458c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d458cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4590: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4590u;
    {
        const bool branch_taken_0x2d4590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4590) {
            ctx->pc = 0x2D45A8u;
            goto label_2d45a8;
        }
    }
    ctx->pc = 0x2D4598u;
    // 0x2d4598: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d459c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d459cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d45a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D45A0u;
    {
        const bool branch_taken_0x2d45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d45a0) {
            ctx->pc = 0x2D45C0u;
            goto label_2d45c0;
        }
    }
    ctx->pc = 0x2D45A8u;
label_2d45a8:
    // 0x2d45a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d45a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d45ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d45acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d45b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d45b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d45b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d45b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d45b8: 0x0  nop
    ctx->pc = 0x2d45b8u;
    // NOP
    // 0x2d45bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d45bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d45c0:
    // 0x2d45c0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2d45c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d45c4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2d45c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d45c8: 0x3044fffe  andi        $a0, $v0, 0xFFFE
    ctx->pc = 0x2d45c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2d45cc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2d45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2d45d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d45d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d45d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d45d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d45d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d45dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d45dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d45e0: 0x0  nop
    ctx->pc = 0x2d45e0u;
    // NOP
    // 0x2d45e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d45e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d45e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d45e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d45ec: 0x0  nop
    ctx->pc = 0x2d45ecu;
    // NOP
    // 0x2d45f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d45f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d45f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D45F4u;
    {
        const bool branch_taken_0x2d45f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45F4u;
        // 0x2d45f8: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45f4) {
            ctx->pc = 0x2D460Cu;
            goto label_2d460c;
        }
    }
    ctx->pc = 0x2D45FCu;
    // 0x2d45fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d45fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d4600: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d4600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d4604: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4604u;
    {
        const bool branch_taken_0x2d4604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4604u;
        // 0x2d4608: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4604) {
            ctx->pc = 0x2D4628u;
            goto label_2d4628;
        }
    }
    ctx->pc = 0x2D460Cu;
label_2d460c:
    // 0x2d460c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d460cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d4610: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d4610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d4614: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d4618: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d4618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d461c: 0x0  nop
    ctx->pc = 0x2d461cu;
    // NOP
    // 0x2d4620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4624: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2d4624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2d4628:
    // 0x2d4628: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d4628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d462c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2D462Cu;
    {
        const bool branch_taken_0x2d462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D462Cu;
        // 0x2d4630: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d462c) {
            ctx->pc = 0x2D46E0u;
            goto label_2d46e0;
        }
    }
    ctx->pc = 0x2D4634u;
    // 0x2d4634: 0x0  nop
    ctx->pc = 0x2d4634u;
    // NOP
label_2d4638:
    // 0x2d4638: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2d4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d463c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D463Cu;
    {
        const bool branch_taken_0x2d463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D463Cu;
        // 0x2d4640: 0x131c3c  dsll32      $v1, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d463c) {
            ctx->pc = 0x2D4678u;
            goto label_2d4678;
        }
    }
    ctx->pc = 0x2D4644u;
    // 0x2d4644: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d4644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d4648: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d4648u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d464c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d464cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d4650: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4654: 0x1e243c  dsll32      $a0, $fp, 16
    ctx->pc = 0x2d4654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 16));
    // 0x2d4658: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2d4658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d465c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d465cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d4660: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x2d4660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4664: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x2d4664u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4668: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d4668u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d466c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d466cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4670: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2d4670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d4674: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x2d4674u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_2d4678:
    // 0x2d4678: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d467c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d467cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d4680: 0x86a40034  lh          $a0, 0x34($s5)
    ctx->pc = 0x2d4680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2d4684: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d4684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d4688: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x2d4688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
    // 0x2d468c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d468cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d4690: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x2d4694: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4698: 0x86a30036  lh          $v1, 0x36($s5)
    ctx->pc = 0x2d4698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x2d469c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2d469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2d46a0: 0x49c3c  dsll32      $s3, $a0, 16
    ctx->pc = 0x2d46a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d46a4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d46a4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d46a8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d46ac: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x2d46acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d46b0: 0x26630700  addiu       $v1, $s3, 0x700
    ctx->pc = 0x2d46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1792));
    // 0x2d46b4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d46b4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d46b8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2d46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d46bc: 0x26430f20  addiu       $v1, $s2, 0xF20
    ctx->pc = 0x2d46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3872));
    // 0x2d46c0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d46c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d46c4: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x2d46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x2d46c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d46c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d46cc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2d46ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2d46d0: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2d46d4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2d46d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2d46d8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2d46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2d46dc: 0x0  nop
    ctx->pc = 0x2d46dcu;
    // NOP
label_2d46e0:
    // 0x2d46e0: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x2d46e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d46e4: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x2d46e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46e8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2d46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d46ec: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x2d46ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x2d46f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d46f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d46f4: 0x97a200a0  lhu         $v0, 0xA0($sp)
    ctx->pc = 0x2d46f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d46f8: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x2d46f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46fc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2d46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2d4700: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x2d4700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d4704: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x2d4704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4708: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d4708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d470c: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x2d470cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4710: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d4710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d4714: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d4714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d4718: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x2d4718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d471c: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x2d471cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2d4720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d4720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d4724: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2d4724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2d4728: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2d4728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d472c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2d472cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2d4730: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2d4730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d4734: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x2d4734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d4738: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2d4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d473c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d4740: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4740u;
    {
        const bool branch_taken_0x2d4740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4740) {
            ctx->pc = 0x2D4768u;
            goto label_2d4768;
        }
    }
    ctx->pc = 0x2D4748u;
    // 0x2d4748: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d4748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d474c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d474cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d4750: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2d4750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2d4754: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d4754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4758: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d4758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d475c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D475Cu;
    {
        const bool branch_taken_0x2d475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D475Cu;
        // 0x2d4760: 0xa216000f  sb          $s6, 0xF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d475c) {
            ctx->pc = 0x2D4780u;
            goto label_2d4780;
        }
    }
    ctx->pc = 0x2D4764u;
    // 0x2d4764: 0x0  nop
    ctx->pc = 0x2d4764u;
    // NOP
label_2d4768:
    // 0x2d4768: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d4768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d476c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d4770: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2d4770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2d4774: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d4774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4778: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d4778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d477c: 0xa216000f  sb          $s6, 0xF($s0)
    ctx->pc = 0x2d477cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 22));
label_2d4780:
    // 0x2d4780: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x2d4780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2d4784: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d4784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d4788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d478c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D478Cu;
    SET_GPR_U32(ctx, 31, 0x2D4794u);
    ctx->pc = 0x2D4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D478Cu;
    // 0x2d4790: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D478Cu, 0x2D4794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4794u;
label_2d4794:
    // 0x2d4794: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2d4794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d4798: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2d4798u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2d479c: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d47a0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d47a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d47a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D47A4u;
    {
        const bool branch_taken_0x2d47a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47A4u;
        // 0x2d47a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47a4) {
            ctx->pc = 0x2D47E0u;
            goto label_2d47e0;
        }
    }
    ctx->pc = 0x2D47ACu;
    // 0x2d47ac: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2d47acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2d47b0: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D47B0u;
    SET_GPR_U32(ctx, 31, 0x2D47B8u);
    ctx->pc = 0x2D47B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47B0u;
    // 0x2d47b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D47B0u, 0x2D47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47B8u;
label_2d47b8:
    // 0x2d47b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d47b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d47bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d47c0: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D47C0u;
    SET_GPR_U32(ctx, 31, 0x2D47C8u);
    ctx->pc = 0x2D47C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47C0u;
    // 0x2d47c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D47C0u, 0x2D47C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47C8u;
label_2d47c8:
    // 0x2d47c8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d47cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d47ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47d0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d47d4: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D47D4u;
    SET_GPR_U32(ctx, 31, 0x2D47DCu);
    ctx->pc = 0x2D47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D47D4u;
    // 0x2d47d8: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D47D4u, 0x2D47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47DCu;
label_2d47dc:
    // 0x2d47dc: 0x0  nop
    ctx->pc = 0x2d47dcu;
    // NOP
label_2d47e0:
    // 0x2d47e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d47e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d47e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d47e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d47e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d47e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d47ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d47ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d47f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d47f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d47f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d47f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d47f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d47f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d47fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d47fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4808: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4808u;
        // 0x2d480c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4810u;
}
