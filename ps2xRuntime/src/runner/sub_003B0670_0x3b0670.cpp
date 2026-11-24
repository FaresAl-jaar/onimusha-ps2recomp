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

// Function: sub_003B0670
// Address: 0x3b0670 - 0x3b10d8
void sub_003B0670_0x3b0670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0670_0x3b0670");
#endif

    switch (ctx->pc) {
        case 0x3b07b8u: goto label_3b07b8;
        case 0x3b0850u: goto label_3b0850;
        case 0x3b08a4u: goto label_3b08a4;
        case 0x3b08bcu: goto label_3b08bc;
        case 0x3b08ecu: goto label_3b08ec;
        case 0x3b08fcu: goto label_3b08fc;
        case 0x3b09b8u: goto label_3b09b8;
        case 0x3b09d0u: goto label_3b09d0;
        case 0x3b0a1cu: goto label_3b0a1c;
        case 0x3b0abcu: goto label_3b0abc;
        case 0x3b0afcu: goto label_3b0afc;
        case 0x3b0b18u: goto label_3b0b18;
        case 0x3b0b28u: goto label_3b0b28;
        case 0x3b0b80u: goto label_3b0b80;
        case 0x3b0b9cu: goto label_3b0b9c;
        case 0x3b0bb8u: goto label_3b0bb8;
        case 0x3b0c04u: goto label_3b0c04;
        case 0x3b0c28u: goto label_3b0c28;
        case 0x3b0c6cu: goto label_3b0c6c;
        case 0x3b0d28u: goto label_3b0d28;
        case 0x3b0d38u: goto label_3b0d38;
        case 0x3b0d68u: goto label_3b0d68;
        case 0x3b0d80u: goto label_3b0d80;
        case 0x3b0d98u: goto label_3b0d98;
        case 0x3b0e00u: goto label_3b0e00;
        case 0x3b0e14u: goto label_3b0e14;
        case 0x3b0e6cu: goto label_3b0e6c;
        case 0x3b0eacu: goto label_3b0eac;
        case 0x3b0ee0u: goto label_3b0ee0;
        case 0x3b0ef0u: goto label_3b0ef0;
        case 0x3b0f5cu: goto label_3b0f5c;
        case 0x3b0f78u: goto label_3b0f78;
        case 0x3b0f90u: goto label_3b0f90;
        case 0x3b0fdcu: goto label_3b0fdc;
        case 0x3b1000u: goto label_3b1000;
        case 0x3b10b8u: goto label_3b10b8;
        default: break;
    }

    ctx->pc = 0x3b0670u;

    // 0x3b0670: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3b0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3b0674: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b0678: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3b067c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b0680: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b0680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b0684: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b0684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b0688: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b0688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b068c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b068cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0690: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3b0690u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3b0694: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3b0694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b0698: 0x10200287  beqz        $at, . + 4 + (0x287 << 2)
    ctx->pc = 0x3B0698u;
    {
        const bool branch_taken_0x3b0698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0698u;
        // 0x3b069c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0698) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B06A0u;
    // 0x3b06a0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3b06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3b06a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3b06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b06a8: 0x24842ac0  addiu       $a0, $a0, 0x2AC0
    ctx->pc = 0x3b06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10944));
    // 0x3b06ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b06acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b06b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b06b4: 0x600008  jr          $v1
    ctx->pc = 0x3B06B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B06C0u: goto label_3b06c0;
            case 0x3B06D0u: goto label_3b06d0;
            case 0x3B06F0u: goto label_3b06f0;
            case 0x3B07A0u: goto label_3b07a0;
            case 0x3B08E0u: goto label_3b08e0;
            case 0x3B09B0u: goto label_3b09b0;
            case 0x3B09F8u: goto label_3b09f8;
            case 0x3B0D30u: goto label_3b0d30;
            case 0x3B0ED0u: goto label_3b0ed0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B06B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B06BCu;
    // 0x3b06bc: 0x0  nop
    ctx->pc = 0x3b06bcu;
    // NOP
label_3b06c0:
    // 0x3b06c0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3b06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b06c4: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x3B06C4u;
    {
        const bool branch_taken_0x3b06c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06C4u;
        // 0x3b06c8: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b06c4) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B06CCu;
    // 0x3b06cc: 0x0  nop
    ctx->pc = 0x3b06ccu;
    // NOP
label_3b06d0:
    // 0x3b06d0: 0x86230526  lh          $v1, 0x526($s1)
    ctx->pc = 0x3b06d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3b06d4: 0xa6230512  sh          $v1, 0x512($s1)
    ctx->pc = 0x3b06d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b06d8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b06d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b06dc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b06dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b06e0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b06e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b06e4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b06e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b06e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b06ec: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x3b06ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3b06f0:
    // 0x3b06f0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b06f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b06f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B06F4u;
    {
        const bool branch_taken_0x3b06f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06F4u;
        // 0x3b06f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b06f4) {
            ctx->pc = 0x3B0708u;
            goto label_3b0708;
        }
    }
    ctx->pc = 0x3B06FCu;
    // 0x3b06fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B06FCu;
    {
        const bool branch_taken_0x3b06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b06fc) {
            ctx->pc = 0x3B0788u;
            goto label_3b0788;
        }
    }
    ctx->pc = 0x3B0704u;
    // 0x3b0704: 0x0  nop
    ctx->pc = 0x3b0704u;
    // NOP
label_3b0708:
    // 0x3b0708: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b0708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b070c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b0710: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b0710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b0714: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0714u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0718: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b0718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b071c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B071Cu;
    {
        const bool branch_taken_0x3b071c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b071c) {
            ctx->pc = 0x3B0758u;
            goto label_3b0758;
        }
    }
    ctx->pc = 0x3B0724u;
    // 0x3b0724: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b0724u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0728: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b0728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b072c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B072Cu;
    {
        const bool branch_taken_0x3b072c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B072Cu;
        // 0x3b0730: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b072c) {
            ctx->pc = 0x3B0780u;
            goto label_3b0780;
        }
    }
    ctx->pc = 0x3B0734u;
    // 0x3b0734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0738: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b0738u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b073c: 0x0  nop
    ctx->pc = 0x3b073cu;
    // NOP
    // 0x3b0740: 0x0  nop
    ctx->pc = 0x3b0740u;
    // NOP
    // 0x3b0744: 0x2010  mfhi        $a0
    ctx->pc = 0x3b0744u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b0748: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0748u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b074c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B074Cu;
    {
        const bool branch_taken_0x3b074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B074Cu;
        // 0x3b0750: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b074c) {
            ctx->pc = 0x3B0780u;
            goto label_3b0780;
        }
    }
    ctx->pc = 0x3B0754u;
    // 0x3b0754: 0x0  nop
    ctx->pc = 0x3b0754u;
    // NOP
label_3b0758:
    // 0x3b0758: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b075c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b075cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b0760: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0760u;
    {
        const bool branch_taken_0x3b0760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0760) {
            ctx->pc = 0x3B0780u;
            goto label_3b0780;
        }
    }
    ctx->pc = 0x3B0768u;
    // 0x3b0768: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b076c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0770: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b0770u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0774u;
    {
        const bool branch_taken_0x3b0774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0774u;
        // 0x3b0778: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0774) {
            ctx->pc = 0x3B0788u;
            goto label_3b0788;
        }
    }
    ctx->pc = 0x3B077Cu;
    // 0x3b077c: 0x0  nop
    ctx->pc = 0x3b077cu;
    // NOP
label_3b0780:
    // 0x3b0780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0784: 0x0  nop
    ctx->pc = 0x3b0784u;
    // NOP
label_3b0788:
    // 0x3b0788: 0x1460024b  bnez        $v1, . + 4 + (0x24B << 2)
    ctx->pc = 0x3B0788u;
    {
        const bool branch_taken_0x3b0788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0788) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B0790u;
    // 0x3b0790: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b0790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b0794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b0794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b0798: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x3B0798u;
    {
        const bool branch_taken_0x3b0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0798u;
        // 0x3b079c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0798) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B07A0u;
label_3b07a0:
    // 0x3b07a0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b07a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b07a4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3b07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b07a8: 0x2625055c  addiu       $a1, $s1, 0x55C
    ctx->pc = 0x3b07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1372));
    // 0x3b07ac: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3b07acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3b07b0: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3B07B0u;
    SET_GPR_U32(ctx, 31, 0x3B07B8u);
    ctx->pc = 0x3B07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B07B0u;
    // 0x3b07b4: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3B07B0u, 0x3B07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B07B8u;
label_3b07b8:
    // 0x3b07b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B07B8u;
    {
        const bool branch_taken_0x3b07b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b07b8) {
            ctx->pc = 0x3B07F8u;
            goto label_3b07f8;
        }
    }
    ctx->pc = 0x3B07C0u;
    // 0x3b07c0: 0xc620055c  lwc1        $f0, 0x55C($s1)
    ctx->pc = 0x3b07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b07c4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b07c8: 0x24422a98  addiu       $v0, $v0, 0x2A98
    ctx->pc = 0x3b07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10904));
    // 0x3b07cc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3b07ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3b07d0: 0x92240561  lbu         $a0, 0x561($s1)
    ctx->pc = 0x3b07d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b07d4: 0xc620055c  lwc1        $f0, 0x55C($s1)
    ctx->pc = 0x3b07d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b07d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b07dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b07e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b07e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b07e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b07ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b07ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b07f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B07F0u;
    {
        const bool branch_taken_0x3b07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07F0u;
        // 0x3b07f4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b07f0) {
            ctx->pc = 0x3B0838u;
            goto label_3b0838;
        }
    }
    ctx->pc = 0x3B07F8u;
label_3b07f8:
    // 0x3b07f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b07fc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3b07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0800: 0x24422a98  addiu       $v0, $v0, 0x2A98
    ctx->pc = 0x3b0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10904));
    // 0x3b0804: 0xe620055c  swc1        $f0, 0x55C($s1)
    ctx->pc = 0x3b0804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
    // 0x3b0808: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3b0808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b080c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3b080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3b0810: 0x92240561  lbu         $a0, 0x561($s1)
    ctx->pc = 0x3b0810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0814: 0xc620055c  lwc1        $f0, 0x55C($s1)
    ctx->pc = 0x3b0814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0818: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b0818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b081c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b0820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b0820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b0824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b0828: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b0828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b082c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b082cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b0830: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3b0830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x3b0834: 0x0  nop
    ctx->pc = 0x3b0834u;
    // NOP
label_3b0838:
    // 0x3b0838: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B0838u;
    {
        const bool branch_taken_0x3b0838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0838) {
            ctx->pc = 0x3B08B0u;
            goto label_3b08b0;
        }
    }
    ctx->pc = 0x3B0840u;
    // 0x3b0840: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b0840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3b0844: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b0844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0848: 0xc0aa43c  jal         func_2A90F0
    ctx->pc = 0x3B0848u;
    SET_GPR_U32(ctx, 31, 0x3B0850u);
    ctx->pc = 0x3B084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0848u;
    // 0x3b084c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A90F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A90F0u, 0x3B0848u, 0x3B0850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0850u;
label_3b0850:
    // 0x3b0850: 0xae220554  sw          $v0, 0x554($s1)
    ctx->pc = 0x3b0850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
    // 0x3b0854: 0x92230561  lbu         $v1, 0x561($s1)
    ctx->pc = 0x3b0854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b085c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B085Cu;
    {
        const bool branch_taken_0x3b085c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b085c) {
            ctx->pc = 0x3B0870u;
            goto label_3b0870;
        }
    }
    ctx->pc = 0x3B0864u;
    // 0x3b0864: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3B0864u;
    {
        const bool branch_taken_0x3b0864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0864) {
            ctx->pc = 0x3B08C0u;
            goto label_3b08c0;
        }
    }
    ctx->pc = 0x3B086Cu;
    // 0x3b086c: 0x0  nop
    ctx->pc = 0x3b086cu;
    // NOP
label_3b0870:
    // 0x3b0870: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b0870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0874: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b0874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b0878: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3b0878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x3b087c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b0880: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3b0880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3b0884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b0884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0888: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x3b0888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3b088c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b088cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b0890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0894: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b0894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0898: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b0898u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b089c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B089Cu;
    SET_GPR_U32(ctx, 31, 0x3B08A4u);
    ctx->pc = 0x3B08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B089Cu;
    // 0x3b08a0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B089Cu, 0x3B08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B08A4u;
label_3b08a4:
    // 0x3b08a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B08A4u;
    {
        const bool branch_taken_0x3b08a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b08a4) {
            ctx->pc = 0x3B08C0u;
            goto label_3b08c0;
        }
    }
    ctx->pc = 0x3B08ACu;
    // 0x3b08ac: 0x0  nop
    ctx->pc = 0x3b08acu;
    // NOP
label_3b08b0:
    // 0x3b08b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b08b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b08b4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B08B4u;
    SET_GPR_U32(ctx, 31, 0x3B08BCu);
    ctx->pc = 0x3B08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B08B4u;
    // 0x3b08b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B08B4u, 0x3B08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B08BCu;
label_3b08bc:
    // 0x3b08bc: 0x0  nop
    ctx->pc = 0x3b08bcu;
    // NOP
label_3b08c0:
    // 0x3b08c0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3b08c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3b08c4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b08c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b08c8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b08c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b08cc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b08ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b08d0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b08d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b08d4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b08d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b08d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b08dc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b08dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b08e0:
    // 0x3b08e0: 0x8e250554  lw          $a1, 0x554($s1)
    ctx->pc = 0x3b08e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x3b08e4: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x3B08E4u;
    SET_GPR_U32(ctx, 31, 0x3B08ECu);
    ctx->pc = 0x3B08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B08E4u;
    // 0x3b08e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x3B08E4u, 0x3B08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B08ECu;
label_3b08ec:
    // 0x3b08ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B08ECu;
    {
        const bool branch_taken_0x3b08ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08ECu;
        // 0x3b08f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08ec) {
            ctx->pc = 0x3B0900u;
            goto label_3b0900;
        }
    }
    ctx->pc = 0x3B08F4u;
    // 0x3b08f4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B08F4u;
    SET_GPR_U32(ctx, 31, 0x3B08FCu);
    ctx->pc = 0x3B08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B08F4u;
    // 0x3b08f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B08F4u, 0x3B08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B08FCu;
label_3b08fc:
    // 0x3b08fc: 0x0  nop
    ctx->pc = 0x3b08fcu;
    // NOP
label_3b0900:
    // 0x3b0900: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b0900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b0904: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0904u;
    {
        const bool branch_taken_0x3b0904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0904u;
        // 0x3b0908: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0904) {
            ctx->pc = 0x3B0918u;
            goto label_3b0918;
        }
    }
    ctx->pc = 0x3B090Cu;
    // 0x3b090c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B090Cu;
    {
        const bool branch_taken_0x3b090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b090c) {
            ctx->pc = 0x3B0998u;
            goto label_3b0998;
        }
    }
    ctx->pc = 0x3B0914u;
    // 0x3b0914: 0x0  nop
    ctx->pc = 0x3b0914u;
    // NOP
label_3b0918:
    // 0x3b0918: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b0918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b091c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b0920: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b0920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b0924: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0928: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b0928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b092c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B092Cu;
    {
        const bool branch_taken_0x3b092c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b092c) {
            ctx->pc = 0x3B0968u;
            goto label_3b0968;
        }
    }
    ctx->pc = 0x3B0934u;
    // 0x3b0934: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b0934u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0938: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b0938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b093c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B093Cu;
    {
        const bool branch_taken_0x3b093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B093Cu;
        // 0x3b0940: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b093c) {
            ctx->pc = 0x3B0990u;
            goto label_3b0990;
        }
    }
    ctx->pc = 0x3B0944u;
    // 0x3b0944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0948: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b0948u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b094c: 0x0  nop
    ctx->pc = 0x3b094cu;
    // NOP
    // 0x3b0950: 0x0  nop
    ctx->pc = 0x3b0950u;
    // NOP
    // 0x3b0954: 0x2010  mfhi        $a0
    ctx->pc = 0x3b0954u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b0958: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0958u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b095c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B095Cu;
    {
        const bool branch_taken_0x3b095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B095Cu;
        // 0x3b0960: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b095c) {
            ctx->pc = 0x3B0990u;
            goto label_3b0990;
        }
    }
    ctx->pc = 0x3B0964u;
    // 0x3b0964: 0x0  nop
    ctx->pc = 0x3b0964u;
    // NOP
label_3b0968:
    // 0x3b0968: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b096c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b096cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b0970: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0970u;
    {
        const bool branch_taken_0x3b0970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0970) {
            ctx->pc = 0x3B0990u;
            goto label_3b0990;
        }
    }
    ctx->pc = 0x3B0978u;
    // 0x3b0978: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0978u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b097c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0980: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b0980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0984: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0984u;
    {
        const bool branch_taken_0x3b0984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0984u;
        // 0x3b0988: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0984) {
            ctx->pc = 0x3B0998u;
            goto label_3b0998;
        }
    }
    ctx->pc = 0x3B098Cu;
    // 0x3b098c: 0x0  nop
    ctx->pc = 0x3b098cu;
    // NOP
label_3b0990:
    // 0x3b0990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0994: 0x0  nop
    ctx->pc = 0x3b0994u;
    // NOP
label_3b0998:
    // 0x3b0998: 0x146001c7  bnez        $v1, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x3B0998u;
    {
        const bool branch_taken_0x3b0998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0998) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B09A0u;
    // 0x3b09a0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b09a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b09a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b09a8: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x3B09A8u;
    {
        const bool branch_taken_0x3b09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09A8u;
        // 0x3b09ac: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09a8) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B09B0u;
label_3b09b0:
    // 0x3b09b0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3B09B0u;
    SET_GPR_U32(ctx, 31, 0x3B09B8u);
    ctx->pc = 0x3B09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09B0u;
    // 0x3b09b4: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3B09B0u, 0x3B09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09B8u;
label_3b09b8:
    // 0x3b09b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B09B8u;
    {
        const bool branch_taken_0x3b09b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09B8u;
        // 0x3b09bc: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09b8) {
            ctx->pc = 0x3B09D8u;
            goto label_3b09d8;
        }
    }
    ctx->pc = 0x3B09C0u;
    // 0x3b09c0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b09c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3b09c4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b09c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b09c8: 0xc0aa41c  jal         func_2A9070
    ctx->pc = 0x3B09C8u;
    SET_GPR_U32(ctx, 31, 0x3B09D0u);
    ctx->pc = 0x3B09CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09C8u;
    // 0x3b09cc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9070u, 0x3B09C8u, 0x3B09D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09D0u;
label_3b09d0:
    // 0x3b09d0: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3b09d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3b09d4: 0x0  nop
    ctx->pc = 0x3b09d4u;
    // NOP
label_3b09d8:
    // 0x3b09d8: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3b09d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3b09dc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b09dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b09e0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b09e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b09e4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b09e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b09e8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b09e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b09ec: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b09ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b09f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b09f4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b09f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b09f8:
    // 0x3b09f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b09fc: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3b09fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3b0a00: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3b0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b0a04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b0a08: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3b0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3b0a0c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3b0a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b0a10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3b0a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3b0a14: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3B0A14u;
    SET_GPR_U32(ctx, 31, 0x3B0A1Cu);
    ctx->pc = 0x3B0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A14u;
    // 0x3b0a18: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3B0A14u, 0x3B0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A1Cu;
label_3b0a1c:
    // 0x3b0a1c: 0x92220562  lbu         $v0, 0x562($s1)
    ctx->pc = 0x3b0a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1378)));
    // 0x3b0a20: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B0A20u;
    {
        const bool branch_taken_0x3b0a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0a20) {
            ctx->pc = 0x3B0B08u;
            goto label_3b0b08;
        }
    }
    ctx->pc = 0x3B0A28u;
    // 0x3b0a28: 0x92240561  lbu         $a0, 0x561($s1)
    ctx->pc = 0x3b0a28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0a2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b0a30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b0a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b0a34: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3b0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3b0a38: 0x24632a98  addiu       $v1, $v1, 0x2A98
    ctx->pc = 0x3b0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10904));
    // 0x3b0a3c: 0xc621055c  lwc1        $f1, 0x55C($s1)
    ctx->pc = 0x3b0a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0a40: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3b0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0a44: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3b0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b0a48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b0a4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b0a50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b0a54: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3b0a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0a58: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b0a58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b0a5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b0a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b0a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0a64: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3B0A64u;
    {
        const bool branch_taken_0x3b0a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A64u;
        // 0x3b0a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a64) {
            ctx->pc = 0x3B0B08u;
            goto label_3b0b08;
        }
    }
    ctx->pc = 0x3B0A6Cu;
    // 0x3b0a6c: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B0A6Cu;
    {
        const bool branch_taken_0x3b0a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b0a6c) {
            ctx->pc = 0x3B0AC8u;
            goto label_3b0ac8;
        }
    }
    ctx->pc = 0x3B0A74u;
    // 0x3b0a74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0A74u;
    {
        const bool branch_taken_0x3b0a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0a74) {
            ctx->pc = 0x3B0A88u;
            goto label_3b0a88;
        }
    }
    ctx->pc = 0x3B0A7Cu;
    // 0x3b0a7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3B0A7Cu;
    {
        const bool branch_taken_0x3b0a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0a7c) {
            ctx->pc = 0x3B0B00u;
            goto label_3b0b00;
        }
    }
    ctx->pc = 0x3B0A84u;
    // 0x3b0a84: 0x0  nop
    ctx->pc = 0x3b0a84u;
    // NOP
label_3b0a88:
    // 0x3b0a88: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b0a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0a8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b0a90: 0x3c022900  lui         $v0, 0x2900
    ctx->pc = 0x3b0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10496 << 16));
    // 0x3b0a94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b0a98: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b0a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3b0a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b0a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0aa0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b0aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b0aa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b0aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0aa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b0aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0aac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b0aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ab0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b0ab0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ab4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B0AB4u;
    SET_GPR_U32(ctx, 31, 0x3B0ABCu);
    ctx->pc = 0x3B0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0AB4u;
    // 0x3b0ab8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B0AB4u, 0x3B0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0ABCu;
label_3b0abc:
    // 0x3b0abc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B0ABCu;
    {
        const bool branch_taken_0x3b0abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0abc) {
            ctx->pc = 0x3B0B00u;
            goto label_3b0b00;
        }
    }
    ctx->pc = 0x3B0AC4u;
    // 0x3b0ac4: 0x0  nop
    ctx->pc = 0x3b0ac4u;
    // NOP
label_3b0ac8:
    // 0x3b0ac8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b0ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0acc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b0accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b0ad0: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x3b0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x3b0ad4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b0ad8: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3b0ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3b0adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b0adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ae0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b0ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b0ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b0ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ae8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b0ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0aec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b0aecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0af0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b0af0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0af4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B0AF4u;
    SET_GPR_U32(ctx, 31, 0x3B0AFCu);
    ctx->pc = 0x3B0AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0AF4u;
    // 0x3b0af8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B0AF4u, 0x3B0AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0AFCu;
label_3b0afc:
    // 0x3b0afc: 0x0  nop
    ctx->pc = 0x3b0afcu;
    // NOP
label_3b0b00:
    // 0x3b0b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0b04: 0xa2220562  sb          $v0, 0x562($s1)
    ctx->pc = 0x3b0b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1378), (uint8_t)GPR_U32(ctx, 2));
label_3b0b08:
    // 0x3b0b08: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3b0b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3b0b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b10: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B0B10u;
    SET_GPR_U32(ctx, 31, 0x3B0B18u);
    ctx->pc = 0x3B0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B10u;
    // 0x3b0b14: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B0B10u, 0x3B0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B18u;
label_3b0b18:
    // 0x3b0b18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0B18u;
    {
        const bool branch_taken_0x3b0b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B18u;
        // 0x3b0b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b18) {
            ctx->pc = 0x3B0B28u;
            goto label_3b0b28;
        }
    }
    ctx->pc = 0x3B0B20u;
    // 0x3b0b20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B0B20u;
    SET_GPR_U32(ctx, 31, 0x3B0B28u);
    ctx->pc = 0x3B0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B20u;
    // 0x3b0b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B0B20u, 0x3B0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B28u;
label_3b0b28:
    // 0x3b0b28: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0b2c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3b0b2cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3b0b30: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x3b0b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3b0b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b38: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3b0b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3b0b3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b40: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0b44: 0x7fa90110  sq          $t1, 0x110($sp)
    ctx->pc = 0x3b0b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 9));
    // 0x3b0b48: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b0b48u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3b0b4c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0b50: 0x7fa60120  sq          $a2, 0x120($sp)
    ctx->pc = 0x3b0b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 6));
    // 0x3b0b54: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b0b54u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3b0b58: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0b5c: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x3b0b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x3b0b60: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b0b60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b0b64: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b0b64u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b0b68: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b0b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b0b6c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b0b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b0b70: 0x92260560  lbu         $a2, 0x560($s1)
    ctx->pc = 0x3b0b70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3b0b74: 0xc62c0558  lwc1        $f12, 0x558($s1)
    ctx->pc = 0x3b0b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b0b78: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B0B78u;
    SET_GPR_U32(ctx, 31, 0x3B0B80u);
    ctx->pc = 0x3B0B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B78u;
    // 0x3b0b7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B0B78u, 0x3B0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B80u;
label_3b0b80:
    // 0x3b0b80: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3B0B80u;
    {
        const bool branch_taken_0x3b0b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0b80) {
            ctx->pc = 0x3B0C48u;
            goto label_3b0c48;
        }
    }
    ctx->pc = 0x3B0B88u;
    // 0x3b0b88: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3B0B88u;
    {
        const bool branch_taken_0x3b0b88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B88u;
        // 0x3b0b8c: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b88) {
            ctx->pc = 0x3B0C38u;
            goto label_3b0c38;
        }
    }
    ctx->pc = 0x3B0B90u;
    // 0x3b0b90: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3b0b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3b0b94: 0xc09e900  jal         func_27A400
    ctx->pc = 0x3B0B94u;
    SET_GPR_U32(ctx, 31, 0x3B0B9Cu);
    ctx->pc = 0x3B0B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B94u;
    // 0x3b0b98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A400u, 0x3B0B94u, 0x3B0B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B9Cu;
label_3b0b9c:
    // 0x3b0b9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b0b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ba0: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B0BA0u;
    {
        const bool branch_taken_0x3b0ba0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BA0u;
        // 0x3b0ba4: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ba0) {
            ctx->pc = 0x3B0C38u;
            goto label_3b0c38;
        }
    }
    ctx->pc = 0x3B0BA8u;
    // 0x3b0ba8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B0BA8u;
    {
        const bool branch_taken_0x3b0ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BA8u;
        // 0x3b0bac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ba8) {
            ctx->pc = 0x3B0C38u;
            goto label_3b0c38;
        }
    }
    ctx->pc = 0x3B0BB0u;
    // 0x3b0bb0: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x3b0bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3b0bb4: 0x0  nop
    ctx->pc = 0x3b0bb4u;
    // NOP
label_3b0bb8:
    // 0x3b0bb8: 0x92230561  lbu         $v1, 0x561($s1)
    ctx->pc = 0x3b0bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0bbc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0BBCu;
    {
        const bool branch_taken_0x3b0bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0bbc) {
            ctx->pc = 0x3B0BD8u;
            goto label_3b0bd8;
        }
    }
    ctx->pc = 0x3B0BC4u;
    // 0x3b0bc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b0bc8: 0x8c6306ac  lw          $v1, 0x6AC($v1)
    ctx->pc = 0x3b0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
    // 0x3b0bcc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3b0bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3b0bd0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B0BD0u;
    {
        const bool branch_taken_0x3b0bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0bd0) {
            ctx->pc = 0x3B0C28u;
            goto label_3b0c28;
        }
    }
    ctx->pc = 0x3B0BD8u;
label_3b0bd8:
    // 0x3b0bd8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3b0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b0bdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b0be0: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3b0be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3b0be4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B0BE4u;
    {
        const bool branch_taken_0x3b0be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b0be4) {
            ctx->pc = 0x3B0C10u;
            goto label_3b0c10;
        }
    }
    ctx->pc = 0x3B0BECu;
    // 0x3b0bec: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3b0becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0bf0: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x3b0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b0bf4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b0bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b0bf8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b0bfc: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3B0BFCu;
    SET_GPR_U32(ctx, 31, 0x3B0C04u);
    ctx->pc = 0x3B0C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BFCu;
    // 0x3b0c00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3B0BFCu, 0x3B0C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C04u;
label_3b0c04:
    // 0x3b0c04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B0C04u;
    {
        const bool branch_taken_0x3b0c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0c04) {
            ctx->pc = 0x3B0C28u;
            goto label_3b0c28;
        }
    }
    ctx->pc = 0x3B0C0Cu;
    // 0x3b0c0c: 0x0  nop
    ctx->pc = 0x3b0c0cu;
    // NOP
label_3b0c10:
    // 0x3b0c10: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3b0c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0c14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b0c18: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3b0c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0c1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b0c20: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3B0C20u;
    SET_GPR_U32(ctx, 31, 0x3B0C28u);
    ctx->pc = 0x3B0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0C20u;
    // 0x3b0c24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3B0C20u, 0x3B0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C28u;
label_3b0c28:
    // 0x3b0c28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b0c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3b0c2c: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x3b0c2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3b0c30: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3B0C30u;
    {
        const bool branch_taken_0x3b0c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C30u;
        // 0x3b0c34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c30) {
            ctx->pc = 0x3B0BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0bb8;
        }
    }
    ctx->pc = 0x3B0C38u;
label_3b0c38:
    // 0x3b0c38: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b0c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b0c3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b0c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b0c40: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x3B0C40u;
    {
        const bool branch_taken_0x3b0c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C40u;
        // 0x3b0c44: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c40) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B0C48u;
label_3b0c48:
    // 0x3b0c48: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3b0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0c4c: 0xc620055c  lwc1        $f0, 0x55C($s1)
    ctx->pc = 0x3b0c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0c50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0c54: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3B0C54u;
    {
        const bool branch_taken_0x3b0c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0c54) {
            ctx->pc = 0x3B0C80u;
            goto label_3b0c80;
        }
    }
    ctx->pc = 0x3B0C5Cu;
    // 0x3b0c5c: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3b0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3b0c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0c64: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B0C64u;
    SET_GPR_U32(ctx, 31, 0x3B0C6Cu);
    ctx->pc = 0x3B0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0C64u;
    // 0x3b0c68: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B0C64u, 0x3B0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C6Cu;
label_3b0c6c:
    // 0x3b0c6c: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b0c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b0c70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b0c74: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x3B0C74u;
    {
        const bool branch_taken_0x3b0c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C74u;
        // 0x3b0c78: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c74) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B0C7Cu;
    // 0x3b0c7c: 0x0  nop
    ctx->pc = 0x3b0c7cu;
    // NOP
label_3b0c80:
    // 0x3b0c80: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b0c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b0c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0C84u;
    {
        const bool branch_taken_0x3b0c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C84u;
        // 0x3b0c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c84) {
            ctx->pc = 0x3B0C98u;
            goto label_3b0c98;
        }
    }
    ctx->pc = 0x3B0C8Cu;
    // 0x3b0c8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B0C8Cu;
    {
        const bool branch_taken_0x3b0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0c8c) {
            ctx->pc = 0x3B0D18u;
            goto label_3b0d18;
        }
    }
    ctx->pc = 0x3B0C94u;
    // 0x3b0c94: 0x0  nop
    ctx->pc = 0x3b0c94u;
    // NOP
label_3b0c98:
    // 0x3b0c98: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b0c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0c9c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b0ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b0ca4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0ca8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b0ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b0cac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B0CACu;
    {
        const bool branch_taken_0x3b0cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b0cac) {
            ctx->pc = 0x3B0CE8u;
            goto label_3b0ce8;
        }
    }
    ctx->pc = 0x3B0CB4u;
    // 0x3b0cb4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b0cb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0cb8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b0cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b0cbc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B0CBCu;
    {
        const bool branch_taken_0x3b0cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CBCu;
        // 0x3b0cc0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cbc) {
            ctx->pc = 0x3B0D10u;
            goto label_3b0d10;
        }
    }
    ctx->pc = 0x3B0CC4u;
    // 0x3b0cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0cc8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b0cc8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b0ccc: 0x0  nop
    ctx->pc = 0x3b0cccu;
    // NOP
    // 0x3b0cd0: 0x0  nop
    ctx->pc = 0x3b0cd0u;
    // NOP
    // 0x3b0cd4: 0x2010  mfhi        $a0
    ctx->pc = 0x3b0cd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b0cd8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0cdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B0CDCu;
    {
        const bool branch_taken_0x3b0cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CDCu;
        // 0x3b0ce0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cdc) {
            ctx->pc = 0x3B0D10u;
            goto label_3b0d10;
        }
    }
    ctx->pc = 0x3B0CE4u;
    // 0x3b0ce4: 0x0  nop
    ctx->pc = 0x3b0ce4u;
    // NOP
label_3b0ce8:
    // 0x3b0ce8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0ce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0cec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b0cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b0cf0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0CF0u;
    {
        const bool branch_taken_0x3b0cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0cf0) {
            ctx->pc = 0x3B0D10u;
            goto label_3b0d10;
        }
    }
    ctx->pc = 0x3B0CF8u;
    // 0x3b0cf8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0d00: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b0d00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0d04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0D04u;
    {
        const bool branch_taken_0x3b0d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D04u;
        // 0x3b0d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d04) {
            ctx->pc = 0x3B0D18u;
            goto label_3b0d18;
        }
    }
    ctx->pc = 0x3B0D0Cu;
    // 0x3b0d0c: 0x0  nop
    ctx->pc = 0x3b0d0cu;
    // NOP
label_3b0d10:
    // 0x3b0d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0d14: 0x0  nop
    ctx->pc = 0x3b0d14u;
    // NOP
label_3b0d18:
    // 0x3b0d18: 0x146000e7  bnez        $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x3B0D18u;
    {
        const bool branch_taken_0x3b0d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D18u;
        // 0x3b0d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d18) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B0D20u;
    // 0x3b0d20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B0D20u;
    SET_GPR_U32(ctx, 31, 0x3B0D28u);
    ctx->pc = 0x3B0D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D20u;
    // 0x3b0d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B0D20u, 0x3B0D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D28u;
label_3b0d28:
    // 0x3b0d28: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x3B0D28u;
    {
        const bool branch_taken_0x3b0d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0d28) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B0D30u;
label_3b0d30:
    // 0x3b0d30: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3B0D30u;
    SET_GPR_U32(ctx, 31, 0x3B0D38u);
    ctx->pc = 0x3B0D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D30u;
    // 0x3b0d34: 0x8e240554  lw          $a0, 0x554($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3B0D30u, 0x3B0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D38u;
label_3b0d38:
    // 0x3b0d38: 0xae200554  sw          $zero, 0x554($s1)
    ctx->pc = 0x3b0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 0));
    // 0x3b0d3c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b0d40: 0x92240561  lbu         $a0, 0x561($s1)
    ctx->pc = 0x3b0d40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0d44: 0x24422aa2  addiu       $v0, $v0, 0x2AA2
    ctx->pc = 0x3b0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10914));
    // 0x3b0d48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3b0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b0d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b0d50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b0d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b0d58: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3b0d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b0d5c: 0xa2220560  sb          $v0, 0x560($s1)
    ctx->pc = 0x3b0d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1376), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0d60: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3B0D60u;
    SET_GPR_U32(ctx, 31, 0x3B0D68u);
    ctx->pc = 0x3B0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D60u;
    // 0x3b0d64: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3B0D60u, 0x3B0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D68u;
label_3b0d68:
    // 0x3b0d68: 0x12000051  beqz        $s0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3B0D68u;
    {
        const bool branch_taken_0x3b0d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D68u;
        // 0x3b0d6c: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d68) {
            ctx->pc = 0x3B0EB0u;
            goto label_3b0eb0;
        }
    }
    ctx->pc = 0x3B0D70u;
    // 0x3b0d70: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b0d70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3b0d74: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b0d74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0d78: 0xc0aa42c  jal         func_2A90B0
    ctx->pc = 0x3B0D78u;
    SET_GPR_U32(ctx, 31, 0x3B0D80u);
    ctx->pc = 0x3B0D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D78u;
    // 0x3b0d7c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A90B0u, 0x3B0D78u, 0x3B0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D80u;
label_3b0d80:
    // 0x3b0d80: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3b0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3b0d84: 0x92220561  lbu         $v0, 0x561($s1)
    ctx->pc = 0x3b0d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0d88: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B0D88u;
    {
        const bool branch_taken_0x3b0d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D88u;
        // 0x3b0d8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d88) {
            ctx->pc = 0x3B0E18u;
            goto label_3b0e18;
        }
    }
    ctx->pc = 0x3B0D90u;
    // 0x3b0d90: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x3B0D90u;
    SET_GPR_U32(ctx, 31, 0x3B0D98u);
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x3B0D90u, 0x3B0D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D98u;
label_3b0d98:
    // 0x3b0d98: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b0d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0d9c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x3b0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x3b0da0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b0da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b0da4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b0da8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3b0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3b0dac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b0db0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b0db0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b0db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b0db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b0db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b0db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b0dbc: 0x0  nop
    ctx->pc = 0x3b0dbcu;
    // NOP
    // 0x3b0dc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b0dc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b0dc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b0dc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0dc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0DC8u;
    {
        const bool branch_taken_0x3b0dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0dc8) {
            ctx->pc = 0x3B0DE0u;
            goto label_3b0de0;
        }
    }
    ctx->pc = 0x3B0DD0u;
    // 0x3b0dd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b0dd4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b0dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b0dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0DD8u;
    {
        const bool branch_taken_0x3b0dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0dd8) {
            ctx->pc = 0x3B0DF8u;
            goto label_3b0df8;
        }
    }
    ctx->pc = 0x3B0DE0u;
label_3b0de0:
    // 0x3b0de0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b0de0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b0de4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b0de8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0de8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b0dec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b0decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b0df0: 0x0  nop
    ctx->pc = 0x3b0df0u;
    // NOP
    // 0x3b0df4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b0df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3b0df8:
    // 0x3b0df8: 0xc0ad00c  jal         func_2B4030
    ctx->pc = 0x3B0DF8u;
    SET_GPR_U32(ctx, 31, 0x3B0E00u);
    ctx->pc = 0x2B4030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4030u, 0x3B0DF8u, 0x3B0E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E00u;
label_3b0e00:
    // 0x3b0e00: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x3b0e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3b0e04: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x3b0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3b0e08: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3b0e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0e0c: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3B0E0Cu;
    SET_GPR_U32(ctx, 31, 0x3B0E14u);
    ctx->pc = 0x3B0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E0Cu;
    // 0x3b0e10: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3B0E0Cu, 0x3B0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E14u;
label_3b0e14:
    // 0x3b0e14: 0x0  nop
    ctx->pc = 0x3b0e14u;
    // NOP
label_3b0e18:
    // 0x3b0e18: 0x92230561  lbu         $v1, 0x561($s1)
    ctx->pc = 0x3b0e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0e20: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B0E20u;
    {
        const bool branch_taken_0x3b0e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b0e20) {
            ctx->pc = 0x3B0E78u;
            goto label_3b0e78;
        }
    }
    ctx->pc = 0x3B0E28u;
    // 0x3b0e28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0E28u;
    {
        const bool branch_taken_0x3b0e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0e28) {
            ctx->pc = 0x3B0E38u;
            goto label_3b0e38;
        }
    }
    ctx->pc = 0x3B0E30u;
    // 0x3b0e30: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3B0E30u;
    {
        const bool branch_taken_0x3b0e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0e30) {
            ctx->pc = 0x3B0EB0u;
            goto label_3b0eb0;
        }
    }
    ctx->pc = 0x3B0E38u;
label_3b0e38:
    // 0x3b0e38: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b0e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0e3c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b0e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b0e40: 0x3c022a00  lui         $v0, 0x2A00
    ctx->pc = 0x3b0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10752 << 16));
    // 0x3b0e44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b0e48: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b0e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3b0e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b0e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e50: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b0e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b0e54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b0e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b0e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b0e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e60: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b0e60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B0E64u;
    SET_GPR_U32(ctx, 31, 0x3B0E6Cu);
    ctx->pc = 0x3B0E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E64u;
    // 0x3b0e68: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B0E64u, 0x3B0E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E6Cu;
label_3b0e6c:
    // 0x3b0e6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B0E6Cu;
    {
        const bool branch_taken_0x3b0e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0e6c) {
            ctx->pc = 0x3B0EB0u;
            goto label_3b0eb0;
        }
    }
    ctx->pc = 0x3B0E74u;
    // 0x3b0e74: 0x0  nop
    ctx->pc = 0x3b0e74u;
    // NOP
label_3b0e78:
    // 0x3b0e78: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b0e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0e7c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b0e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b0e80: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x3b0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x3b0e84: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b0e88: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3b0e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3b0e8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b0e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e90: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b0e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b0e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b0e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b0e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b0e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ea0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b0ea0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ea4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B0EA4u;
    SET_GPR_U32(ctx, 31, 0x3B0EACu);
    ctx->pc = 0x3B0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0EA4u;
    // 0x3b0ea8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B0EA4u, 0x3B0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0EACu;
label_3b0eac:
    // 0x3b0eac: 0x0  nop
    ctx->pc = 0x3b0eacu;
    // NOP
label_3b0eb0:
    // 0x3b0eb0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x3b0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3b0eb4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b0eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b0eb8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b0eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b0ebc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b0ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0ec0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b0ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0ec4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b0ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b0ec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b0ecc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b0eccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b0ed0:
    // 0x3b0ed0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3b0ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3b0ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ed8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B0ED8u;
    SET_GPR_U32(ctx, 31, 0x3B0EE0u);
    ctx->pc = 0x3B0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0ED8u;
    // 0x3b0edc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B0ED8u, 0x3B0EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0EE0u;
label_3b0ee0:
    // 0x3b0ee0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0EE0u;
    {
        const bool branch_taken_0x3b0ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EE0u;
        // 0x3b0ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ee0) {
            ctx->pc = 0x3B0EF0u;
            goto label_3b0ef0;
        }
    }
    ctx->pc = 0x3B0EE8u;
    // 0x3b0ee8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B0EE8u;
    SET_GPR_U32(ctx, 31, 0x3B0EF0u);
    ctx->pc = 0x3B0EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0EE8u;
    // 0x3b0eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B0EE8u, 0x3B0EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0EF0u;
label_3b0ef0:
    // 0x3b0ef0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0ef4: 0x4600046  bltz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x3B0EF4u;
    {
        const bool branch_taken_0x3b0ef4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3B0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EF4u;
        // 0x3b0ef8: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ef4) {
            ctx->pc = 0x3B1010u;
            goto label_3b1010;
        }
    }
    ctx->pc = 0x3B0EFCu;
    // 0x3b0efc: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x3B0EFCu;
    {
        const bool branch_taken_0x3b0efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0efc) {
            ctx->pc = 0x3B1010u;
            goto label_3b1010;
        }
    }
    ctx->pc = 0x3B0F04u;
    // 0x3b0f04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0f08: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x3b0f08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3b0f0c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3b0f0cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3b0f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f14: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3b0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3b0f18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f1c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0f20: 0x7fa90110  sq          $t1, 0x110($sp)
    ctx->pc = 0x3b0f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 9));
    // 0x3b0f24: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b0f24u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3b0f28: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0f2c: 0x7fa60120  sq          $a2, 0x120($sp)
    ctx->pc = 0x3b0f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 6));
    // 0x3b0f30: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b0f30u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3b0f34: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0f38: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x3b0f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x3b0f3c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b0f3cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b0f40: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b0f40u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b0f44: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b0f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b0f48: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b0f48u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b0f4c: 0x92260560  lbu         $a2, 0x560($s1)
    ctx->pc = 0x3b0f4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3b0f50: 0xc62c0558  lwc1        $f12, 0x558($s1)
    ctx->pc = 0x3b0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b0f54: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B0F54u;
    SET_GPR_U32(ctx, 31, 0x3B0F5Cu);
    ctx->pc = 0x3B0F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F54u;
    // 0x3b0f58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B0F54u, 0x3B0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F5Cu;
label_3b0f5c:
    // 0x3b0f5c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3B0F5Cu;
    {
        const bool branch_taken_0x3b0f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0f5c) {
            ctx->pc = 0x3B1010u;
            goto label_3b1010;
        }
    }
    ctx->pc = 0x3B0F64u;
    // 0x3b0f64: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3B0F64u;
    {
        const bool branch_taken_0x3b0f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F64u;
        // 0x3b0f68: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f64) {
            ctx->pc = 0x3B1010u;
            goto label_3b1010;
        }
    }
    ctx->pc = 0x3B0F6Cu;
    // 0x3b0f6c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3b0f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3b0f70: 0xc09e900  jal         func_27A400
    ctx->pc = 0x3B0F70u;
    SET_GPR_U32(ctx, 31, 0x3B0F78u);
    ctx->pc = 0x3B0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F70u;
    // 0x3b0f74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A400u, 0x3B0F70u, 0x3B0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F78u;
label_3b0f78:
    // 0x3b0f78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b0f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f7c: 0x12800024  beqz        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B0F7Cu;
    {
        const bool branch_taken_0x3b0f7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F7Cu;
        // 0x3b0f80: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f7c) {
            ctx->pc = 0x3B1010u;
            goto label_3b1010;
        }
    }
    ctx->pc = 0x3B0F84u;
    // 0x3b0f84: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x3B0F84u;
    {
        const bool branch_taken_0x3b0f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F84u;
        // 0x3b0f88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f84) {
            ctx->pc = 0x3B1010u;
            goto label_3b1010;
        }
    }
    ctx->pc = 0x3B0F8Cu;
    // 0x3b0f8c: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x3b0f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b0f90:
    // 0x3b0f90: 0x92230561  lbu         $v1, 0x561($s1)
    ctx->pc = 0x3b0f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
    // 0x3b0f94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0F94u;
    {
        const bool branch_taken_0x3b0f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0f94) {
            ctx->pc = 0x3B0FB0u;
            goto label_3b0fb0;
        }
    }
    ctx->pc = 0x3B0F9Cu;
    // 0x3b0f9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b0fa0: 0x8c6306ac  lw          $v1, 0x6AC($v1)
    ctx->pc = 0x3b0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
    // 0x3b0fa4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3b0fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3b0fa8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B0FA8u;
    {
        const bool branch_taken_0x3b0fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0fa8) {
            ctx->pc = 0x3B1000u;
            goto label_3b1000;
        }
    }
    ctx->pc = 0x3B0FB0u;
label_3b0fb0:
    // 0x3b0fb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3b0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b0fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b0fb8: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3b0fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3b0fbc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B0FBCu;
    {
        const bool branch_taken_0x3b0fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b0fbc) {
            ctx->pc = 0x3B0FE8u;
            goto label_3b0fe8;
        }
    }
    ctx->pc = 0x3B0FC4u;
    // 0x3b0fc4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3b0fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0fc8: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x3b0fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b0fcc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b0fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b0fd0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b0fd4: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3B0FD4u;
    SET_GPR_U32(ctx, 31, 0x3B0FDCu);
    ctx->pc = 0x3B0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FD4u;
    // 0x3b0fd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3B0FD4u, 0x3B0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FDCu;
label_3b0fdc:
    // 0x3b0fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B0FDCu;
    {
        const bool branch_taken_0x3b0fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0fdc) {
            ctx->pc = 0x3B1000u;
            goto label_3b1000;
        }
    }
    ctx->pc = 0x3B0FE4u;
    // 0x3b0fe4: 0x0  nop
    ctx->pc = 0x3b0fe4u;
    // NOP
label_3b0fe8:
    // 0x3b0fe8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3b0fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b0fec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b0fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b0ff0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3b0ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0ff4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b0ff8: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3B0FF8u;
    SET_GPR_U32(ctx, 31, 0x3B1000u);
    ctx->pc = 0x3B0FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FF8u;
    // 0x3b0ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3B0FF8u, 0x3B1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1000u;
label_3b1000:
    // 0x3b1000: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b1000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3b1004: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x3b1004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3b1008: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3B1008u;
    {
        const bool branch_taken_0x3b1008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1008u;
        // 0x3b100c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1008) {
            ctx->pc = 0x3B0F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0f90;
        }
    }
    ctx->pc = 0x3B1010u;
label_3b1010:
    // 0x3b1010: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b1010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b1014: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1014u;
    {
        const bool branch_taken_0x3b1014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1014u;
        // 0x3b1018: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1014) {
            ctx->pc = 0x3B1028u;
            goto label_3b1028;
        }
    }
    ctx->pc = 0x3B101Cu;
    // 0x3b101c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B101Cu;
    {
        const bool branch_taken_0x3b101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b101c) {
            ctx->pc = 0x3B10A8u;
            goto label_3b10a8;
        }
    }
    ctx->pc = 0x3B1024u;
    // 0x3b1024: 0x0  nop
    ctx->pc = 0x3b1024u;
    // NOP
label_3b1028:
    // 0x3b1028: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b1028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b102c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b1030: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b1034: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1034u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b1038: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b1038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b103c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B103Cu;
    {
        const bool branch_taken_0x3b103c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b103c) {
            ctx->pc = 0x3B1078u;
            goto label_3b1078;
        }
    }
    ctx->pc = 0x3B1044u;
    // 0x3b1044: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b1044u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b1048: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b1048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b104c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B104Cu;
    {
        const bool branch_taken_0x3b104c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B104Cu;
        // 0x3b1050: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b104c) {
            ctx->pc = 0x3B10A0u;
            goto label_3b10a0;
        }
    }
    ctx->pc = 0x3B1054u;
    // 0x3b1054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1058: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b1058u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b105c: 0x0  nop
    ctx->pc = 0x3b105cu;
    // NOP
    // 0x3b1060: 0x0  nop
    ctx->pc = 0x3b1060u;
    // NOP
    // 0x3b1064: 0x2010  mfhi        $a0
    ctx->pc = 0x3b1064u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b1068: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1068u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b106c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B106Cu;
    {
        const bool branch_taken_0x3b106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B106Cu;
        // 0x3b1070: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b106c) {
            ctx->pc = 0x3B10A0u;
            goto label_3b10a0;
        }
    }
    ctx->pc = 0x3B1074u;
    // 0x3b1074: 0x0  nop
    ctx->pc = 0x3b1074u;
    // NOP
label_3b1078:
    // 0x3b1078: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b1078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b107c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b107cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b1080: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1080u;
    {
        const bool branch_taken_0x3b1080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1080) {
            ctx->pc = 0x3B10A0u;
            goto label_3b10a0;
        }
    }
    ctx->pc = 0x3B1088u;
    // 0x3b1088: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b108c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1090: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b1090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b1094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1094u;
    {
        const bool branch_taken_0x3b1094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1094u;
        // 0x3b1098: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1094) {
            ctx->pc = 0x3B10A8u;
            goto label_3b10a8;
        }
    }
    ctx->pc = 0x3B109Cu;
    // 0x3b109c: 0x0  nop
    ctx->pc = 0x3b109cu;
    // NOP
label_3b10a0:
    // 0x3b10a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b10a4: 0x0  nop
    ctx->pc = 0x3b10a4u;
    // NOP
label_3b10a8:
    // 0x3b10a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B10A8u;
    {
        const bool branch_taken_0x3b10a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10A8u;
        // 0x3b10ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b10a8) {
            ctx->pc = 0x3B10B8u;
            goto label_3b10b8;
        }
    }
    ctx->pc = 0x3B10B0u;
    // 0x3b10b0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B10B0u;
    SET_GPR_U32(ctx, 31, 0x3B10B8u);
    ctx->pc = 0x3B10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10B0u;
    // 0x3b10b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B10B0u, 0x3B10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B10B8u;
label_3b10b8:
    // 0x3b10b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b10b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b10bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b10bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b10c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b10c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b10c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b10c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b10c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b10c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b10cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b10ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b10d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B10D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10D0u;
        // 0x3b10d4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B10D8u;
}
